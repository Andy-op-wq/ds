//concatenate strings without using string library
#include <stdio.h>

void string_concatenate(char destination[], char source[]) {
    int i = 0, j = 0;
    while (destination[i] != '\0') {
        i++;
    }
    while (source[j] != '\0') {
        destination[i] = source[j];
        i++;
        j++;
    }
    destination[i] = '\0';
}

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    string_concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}