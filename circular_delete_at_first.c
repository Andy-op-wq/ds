//create and triverse a linked list
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
struct node*deleteAtFirst(struct node *head){

struct node *ptr=head;
struct node *p=head;
while (ptr->next!=head)
{
    ptr=ptr->next;
}
ptr->next=head->next; //make last node point 2nd node
head=head->next;  //update head to point 2nd node

free(p); //free old head
return head;



};
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
   
    printf("linked list before deletion :\n");

    linkedlisttriversal(head);
    head=deleteAtFirst(head);
    printf("linked list after deletion:\n");
    linkedlisttriversal(head);
    return 0;

}


