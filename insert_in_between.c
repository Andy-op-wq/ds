//create and triverse a linked list
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

struct node * insertatmiddle(struct node * head,int data,int index)
{
 struct node * ptr= (struct node*) malloc(sizeof(struct node));
 struct node *p=head;
 
 while(p->next!=index)
 {
    p=p->next;
    
 }
 ptr->data=data;
 ptr->next=p->next;
 p->next=ptr;
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

    linkedlisttriversal(head);
    printf("enter the element u want to insert and index where u want to insert:");
    int element, index;
    scanf("%d%d",&element,&index);
    head = insertatmiddle(head,element,index);
      linkedlisttriversal(head);

    return 0;

}


