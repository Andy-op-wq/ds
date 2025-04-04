// delete a node in linked list at end
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
//deleting last element of the liked list
struct node* deleteLast(struct node * head)
{
    struct node * p =head;
     struct node * q =head->next;
   while(q->next!=NULL)
   {
    p=p->next;
    q=q->next;
   }
     p->next=NULL;
     free(q);
    return head;
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
     printf("linked list before deletion:\n");
    linkedlisttriversal(head);
     
     head= deleteLast(head);// to delete last node of linked list
     printf("\nlinked list after deletion:\n");
      linkedlisttriversal(head);
    return 0;
}