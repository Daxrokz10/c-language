// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1
#include <stdio.h>

int main() {
    int i, j, k;
    for(i = 5; i >= 1; i--) { 
        for(j = 1; j <= 5; j++) { 
            if(j <= i) { 
                if(j % 2 == 1) { 
                    k = 1;
                } else { 
                    k = 0;
                }
                printf("%d ", k); 
            }
        }
        printf("\n"); 
    }
    return 0;
}