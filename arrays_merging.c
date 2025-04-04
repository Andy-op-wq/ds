//to merge two arrays
/*#include<stdio.h>
void mergeArrays(int* a[],int n1,int *b[],int n2, int*c[]){
    int i=0,j=0,k=0;
    //pick smaller of the two current elements and move ahead in the array of the picked element
    while(i<n1 && j<n2)
    {
        if(a[i]<n1 && b[j]<n2){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
 // if there are remaining elements of the first array,move them
    while(i<n1)
    {
        b[k++]=a[i++];
    }

    //else if there are remaining elements of 2nd array, move them
    while(j<n2){
        c[k++]=b[j++];
    }
}
int main()
{
    int a[50],b[50],c[100],i;
    printf("enter the size of first array");
    int n1;
    scanf("%d",&n1);
    printf("enter the elements of first array");
    for(i=0;i<=n1;i++)
    scanf("%d",&a[i]);

       printf("enter the size of second array");
    int n2;
    scanf("%d",&n2);
    printf("enter the elements of second array");
    for(i=0;i<=n2;i++)
    scanf("%d",&b[i]);
    
     int n3;
      
      mergeArrays(a,n1,b,n2,c);
      for(i=0;i<n1+n2;i++){
        printf("%d ", &c[i]);

      }
return 0;s



}
*/
#include<stdio.h>

void mergeArrays(int a[], int n1, int b[], int n2, int c[]) {
    int i = 0, j = 0, k = 0;
    
    // Merge the two arrays while both have elements
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // If there are remaining elements in array 'a', copy them to 'c'
    while(i < n1) {
        c[k++] = a[i++];
    }

    // If there are remaining elements in array 'b', copy them to 'c'
    while(j < n2) {
        c[k++] = b[j++];
    }
}

int main() {
    int a[50], b[50], c[100], i;
    int n1, n2;

    // Input the size and elements of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input the size and elements of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Merge the arrays
    mergeArrays(a, n1, b, n2, c);

    // Output the merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
