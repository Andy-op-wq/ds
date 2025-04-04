//to find string length without using library
#include <stdio.h>

int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Hello, World!";
    printf("Length of the string: %d\n", string_length(str));
    return 0;
}