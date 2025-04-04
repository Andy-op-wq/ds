// Function to search an element in an integer array using functions (passing array to function)
#include <stdio.h>

int binarySearch(int a[],int size,int element)
{
    int low,mid,high;
      low=0;
    high=size-1;
    //keep searching until low and high converges
    while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==element){
        return mid;
    }
    if(a[mid]<element)
    {
        low=mid+1;
    }
    else high=mid-1;
    }
    
    return -1;
}

int main() {
    //binary search works only for sorted array
    int a[50], size,element, i, d;
    printf("Enter the size of integer array:\n");
    scanf("%d", &size);
    printf("Enter elements of integer array in sorted manner :\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search:\n");
    scanf("%d", &element);
    d = binarySearch(a, size, element);
    if (d == -1) {
        printf("Not found\n");
    } else {
        printf("Found at location %d\n", d);
    }
    return 0;
}
