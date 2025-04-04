//insert a node at the beginning of the linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void linkedlisttriversal(struct node * head)
{
    struct node * ptr = head;
    do 
    {
        printf("Element:%d \n",ptr->data);
         ptr=ptr->next;
    }
      while(ptr!=head);
}
struct node * insertatbeginning(struct node * head,int data)
{
    struct node * ptr= (struct node*) malloc(sizeof(struct node));
    ptr ->data=data;
    struct node * p = head->next;
    while(p-> next !=head)
    {
        p=p->next;
    }
    //at this point ,p points to the last node of this circular linked list
    p->next=ptr;   //link the last node to the new node
    ptr->next=head; // link new node to first node
    head=ptr;   //update head to new node
    return head;   //return new head
}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    //allocate memory for node in linkedlist in heap
    head =( struct node *)malloc (sizeof(struct node));
    second =( struct node *)malloc (sizeof(struct node));
    third=( struct node *)malloc (sizeof(struct node));
    fourth =( struct node *)malloc (sizeof(struct node));

    head -> data= 7;
    head -> next=second;

    second -> data= 14;
    second -> next=third;

    third -> data= 44;
    third -> next=fourth;

    fourth -> data= 67;
    fourth -> next=head;

    printf("linked list before insertion\n");
    linkedlisttriversal(head);
    printf("enter the element u want to insert in beginning:\n");
    int x;
    scanf("%d",&x);
    head = insertatbeginning(head,x);
    printf("\nlinked list after insertion\n");
    linkedlisttriversal(head);

}


