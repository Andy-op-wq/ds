#include<stdio.h>
//code for traversal
void display(int arr[],int size){
    int i;
    for (i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//code for deletion
void indDeletion(int arr[],int size,int index){
   
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }

}
int main()
{
    int arr[100], size,i,index;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elemets of array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("your array before deletion is:\n");
    display(arr,size);
    printf("enter the index where u want to delete element:");
    scanf("%d",&index);
   indDeletion(arr,size,index);
    printf("element deleted sucessfully at index %d\n",index);
    size-=1;
    printf("array after insertion is:\n");
    display(arr,size);

}