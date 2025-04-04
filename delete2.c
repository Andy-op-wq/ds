#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;           
    struct Node* next;  
};

// duplicate checking
int exists(struct Node* head, int value) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            return 1; // Value found
        }
        temp = temp->next;
    }
    return 0; // Value not found
}

//fxn for new node insertion
void insertAtEnd(struct Node** head, int data) {
    // memory allocation
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Traverse to the end 
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;       //new node insertion at end
}

//fxn to print
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice;

    printf("Linked List Creation\n");
    do {
        printf("\n1. Add element to linked list\n");
        printf("2. Display linked list\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int data;
                printf("Enter the element to insert: ");
                scanf("%d", &data);

                if (exists(head, data)) {
                    printf("The element %d already exists in the linked list. Duplicate values are not allowed.\n", data);
                } else {
                    insertAtEnd(&head, data);
                    printf("Element %d added to the linked list.\n", data);
                }
                break;
            }
            case 2:
                printf("Linked list: ");
                printList(head);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}