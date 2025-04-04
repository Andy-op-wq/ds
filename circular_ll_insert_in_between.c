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

struct node *insertinbetween(struct node *head,int data,int index){

struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
struct node *temp=head;
int i = 0;
while (i<index-1)
{
    temp=temp->next;
    i++;
}
ptr->next=temp->next;
temp->next=ptr;
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

    printf("linked list before insertion\n");
    linkedlisttriversal(head);
    int x;
    printf("enter the element u want to insert:\n");
       scanf("%d",&x);
    
    printf("enter the index where u want to enter the element\n");
    int index;
    scanf("%d",&index);
 
    head = insertinbetween(head,x,index);
    printf("\nlinked list after insertion\n");
    linkedlisttriversal(head);

}







/*
// operations on circular linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node * next;



};
struct node *traversecircular(struct node * head){

struct node *ptr=head;
do
{
    printf("%d",ptr->data);
    ptr=ptr->next;
} while (ptr!=head);
 



return head;


};
struct node *insertatbeginning(struct node *head,int data){

struct node *ptr=(struct node * )malloc(sizeof(struct node));
ptr->data=data;
struct node *temp =head;
while (temp->next!=head)
{
   temp=temp->next;
}
temp->next=ptr;
ptr->next=head;
head=ptr;
return head;



};

struct node *insertattheend(struct node *head,int data){
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->data=data;
struct node *temp=head;
while (temp->next!=head)
{
   temp=temp->next; 
}

temp->next=ptr;
ptr->next=head;
return head;




}
struct node *insertinbetween(struct node *head,int index,int data){

struct node ptr=(struct node)malloc(sizeof(struct node));
ptr->data=data;
struct node *temp=head;
int i = 0;
while (i<index-1)
{
    temp=temp->next;
    i++;
}
ptr->next=temp->next;
temp->next=ptr;
return head;


};
struct node *insertifpreviousnode(struct node*head,struct node*prev,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=prev->next;
prev->next=ptr;
return head;
}
struct node*deleteatstart(struct node *head){

struct node *ptr=head;
while (ptr->next!=head)
{
    ptr=ptr->next;
}
ptr->next=head->next;
struct node *newhead=head->next;
free(head);
return newhead;



};
struct node *deleteatend(struct node *head){
struct node *ptr=head;
while (ptr->next->next!=head)
{
   ptr=ptr->next;
}
struct node *qtr =ptr->next;
ptr->next=head;
free(qtr);
return head;




}
struct node *deleteinbetween(struct node*head,int index){

struct node*ptr=head;
int i=0;
while (i < index-1)
{
    ptr=ptr->next;
    i++;
}
struct node *qtr=ptr->next;
ptr->next=qtr->next;
free(qtr);
return head;



}
struct node*deleteifprev(struct node *head,struct node *prev){

struct node *ptr=prev->next;
prev->next=ptr->next;
free(ptr);
return head;


}
int main(){
struct node * head=(struct node*)malloc(sizeof(struct node));
struct node * first=(struct node*)malloc(sizeof(struct node));
struct node * second=(struct node*)malloc(sizeof(struct node));
struct node * third=(struct node*)malloc(sizeof(struct node));
head->data=1;
head->next=first;
first->data=2;
first->next=second;
second->data=3;
second->next=third;
third->data=4;
third->next=head;
head=deleteifprev(head,head);
traversecircular(head);

}
*/