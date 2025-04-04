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
struct node*deleteAtLast(struct node *head){

struct node *p=head;
struct node *q=head->next;
while (q->next!=head)
{
    p=p->next;
    q=q->next;
}
p->next=q->next;//link 2nd last node to head

free(q); //free old head
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
    head=deleteAtLast(head);
    printf("linked list after deletion:\n");
    linkedlisttriversal(head);
    return 0;

}


