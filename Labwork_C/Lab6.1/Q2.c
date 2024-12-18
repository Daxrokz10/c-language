#include <stdio.h>

int main(){
    int n , i , j;

    printf("With for loop");

    for(i=10;i>=1;i--){
        printf(" %d ",i);
    }

    printf("\n\n");

    printf("With while loop");

    n = 10;

    while(n >= 1){
        printf(" %d ",n);
        n--;
    }

    printf("\n\n");

    printf("With do-while loop");

    j = 10;

    do {
        printf(" %d ", j);
        j--;
    } while (j >= 1);

 
    printf("\n");


}