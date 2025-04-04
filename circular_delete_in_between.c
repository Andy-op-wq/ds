//delete element at a given index
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
//deleting the element at given index
struct node* deleteAtIndex(struct node * head,int index)

{
    struct node *p =head;
    struct node *q =head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
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
    fourth -> next=head;
   
     printf("linked list before deletion:\n");
    linkedlisttriversal(head);
    int n;
    printf("enter index of element u want to delete:\n");
    scanf("%d",&n);
     
     head= deleteAtIndex(head,n); //for deleting element at the index in the linked list
     printf("\nlinked list after deletion:\n");
      linkedlisttriversal(head);
    return 0;
}




