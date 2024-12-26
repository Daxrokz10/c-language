// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1

#include <stdio.h>

int main(){
    int i, j, s;

    for(i = 5; i >= 1; i--){
        for(s = 1; s <= 5 - i; s++){
            printf("  ");
        }
        for(j = 1; j <= i; j++){
            if(j == i) {
                printf("1 "); 
            } else if(j % 2 == 0){
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
 
        printf("\n");
    }
}