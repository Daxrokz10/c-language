#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) { // Start from 5 down to 1
        for(j = 1; j <= 5 - i; j++) {
            printf(" "); // Print leading spaces
        }

        for(j = i; j <= 5; j++) {
            printf("%d ", j); // Print increasing numbers with a space
        }

        for(j = 4; j >= i; j--) {
            printf("%d ", j); // Print decreasing numbers with a space
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}