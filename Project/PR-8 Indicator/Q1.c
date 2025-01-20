//Q1Length of string using pointer

#include <stdio.h>

int main() {
    char str[] = "Hello, World!";

    char *str_ptr = str;


    int length = 0;
    while (*str_ptr != '\0') {
        length++;
        str_ptr++;
    }

    printf("The Length of the String is: %d\n", length);

    return 0;
}
