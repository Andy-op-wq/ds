//delete a node with given value(first found)

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
//deleting the given element
struct node* deleteAtIndex(struct node * head,int value)

{
    struct node *p =head;
    struct node *q =head->next;
    while(q->data!=value &&q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
   if(q->data==value)
   {
    p->next=q->next;
    free(q);
   }

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
    int n;
    printf("enter the element u want to delete:\n");
    scanf("%d",&n);
     
     head= deleteAtIndex(head,n); //for deleting element at the index in the linked list
     printf("\nlinked list after deletion:\n");
      linkedlisttriversal(head);
    return 0;
}