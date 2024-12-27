// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1

#include <stdio.h>

int main() {
    int i, j, s;

    for (i = 5; i >= 1; i--) {
        for (s = 5; s > i; s--) {  // Create leading spaces based on the current row
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }
}