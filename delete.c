#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// at end insert
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// delete at beginning
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// delete at end
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = *head;
    struct Node* prev = NULL;
    
    // if first note is present
    if (temp->next == NULL) {
        *head = NULL;
        free(temp);
        return;
    }
    
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    
    prev->next = NULL;
    free(temp);
}

// at any position
void deleteAtPosition(struct Node** head, int k) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = *head;
    
    // dlt at ist
    if (k == 1) {
        *head = (*head)->next;
        free(temp);
        return;
    }
    
    // moving to k-1
    for (int i = 1; temp != NULL && i < k - 1; i++) {
        temp = temp->next;
    }
    
    // validation
    if (temp == NULL || temp->next == NULL) {
        printf("Record not found at position %d.\n", k);
        return;
    }
    
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
}

//print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, k;

    // Insert nodes into the list
    printf("Enter elements of the list (enter -1 to end):\n");
    while (1) {
        scanf("%d", &data);
        if (data == -1) break;
        insertEnd(&head, data);
    }

    // Display original list
    printf("Original List: ");
    printList(head);

    while (1) {
        printf("\nChoose deletion operation:\n");
        printf("1. Delete at Beginning\n");
        printf("2. Delete at End\n");
        printf("3. Delete at Position\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deleteAtBeginning(&head);
                printf("After deleting at beginning: ");
                printList(head);
                break;
            case 2:
                deleteAtEnd(&head);
                printf("After deleting at end: ");
                printList(head);
                break;
            case 3:
                printf("Enter the position to delete: ");
                scanf("%d", &k);
                deleteAtPosition(&head, k);
                printf("After deleting at position %d: ", k);
                printList(head);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}