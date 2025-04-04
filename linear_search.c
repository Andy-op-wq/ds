// Function to search an element in an integer array using functions (passing array to function)
#include <stdio.h>

int search(int a[], int size, int element) {
    int i;
    for (i = 0; i < size; i++) {
        if (element == a[i]) {
            return i+1 ; // Returning 1-based index
        }
    }
    return -1; // Not found
}

int main() {
    int a[50], size,element, i, d;
    printf("Enter the size of integer array:\n");
    scanf("%d", &size);
    printf("Enter elements of integer array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search:\n");
    scanf("%d", &element);
    d = search(a, size, element);
    if (d == -1) {
        printf("Not found\n");
    } else {
        printf("Found at location %d\n", d);
    }
    return 0;
}
