//insert a node at the beginning of the linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void linkedlisttriversal(struct node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d \n",ptr->data);
         ptr=ptr->next;
    }
}
struct node * insertatbeginning(struct node * head,int data)
{
    struct node * ptr= (struct node*) malloc(sizeof(struct node));
    ptr ->data=data;
    ptr ->next=head;
     return ptr;
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
    fourth -> next=NULL;

    printf("linked list before insertion\n");
    linkedlisttriversal(head);
    head = insertatbeginning(head,56);
    printf("\nlinked list after insertion\n");
    linkedlisttriversal(head);

}


