//insert a node at the end of the linked list
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

struct nodde * insertatend(struct node* head,int data)
{
    struct node * ptr =(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node * p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    //at this point p points at last node
    p->next=ptr;
    ptr->next=head;
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

    printf("linked list before insertion\n");
    linkedlisttriversal(head);
    printf("enter the element u want to insert in end:\n");
    int x;
    scanf("%d",&x);
    head = insertatend(head,x);
    printf("\nlinked list after insertion\n");
    linkedlisttriversal(head);

}


