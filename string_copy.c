//copying string without using string library
#include <stdio.h>

void string_copy(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[50];
    string_copy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}