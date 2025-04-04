#include<stdio.h>
void display(int arr[],int size){
    int i;
    for (i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int indinsert(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main()
{
    int arr[100], size,i,index,element;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elemets of array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("your array before insertion is:\n");
    display(arr,size);
    printf("enter the index where u want to insert element:");
    scanf("%d",&index);
    printf("enter the element u want to insert:");
    scanf("%d",&element);
   int d= indinsert(arr,size,element,100,index);
   if(d==-1){
    printf("no space for insertion\n");
    return 0;
   }
   else{
    printf("element %d inserted sucessfully at index %d\n",element,index);
    size+=1;
    printf("array after insertion is:\n");
    display(arr,size);}

}