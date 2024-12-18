#include <stdio.h>

int main(){
    int i;

    printf("With for loop");
    for (i = 1; i <= 10; i++){
        printf(" %d ",i);
    } 

    printf("\n\n");
    
    i=1;

    printf("With while loop");

    while(i<=10){
        printf(" %d ",i);
        i++;
    }

    printf("\n\n");

    i = 1; 

    printf("With do-while loop");

    do{
        printf(" %d ",i);
        i++;
    }while(i<=10);
}