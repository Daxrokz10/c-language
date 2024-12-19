#include <stdio.h>

int main(){
    int num , i;

    printf("Enter the number to which you want the odd numbers : ");
    scanf("%d",&num);

    printf("With for loop");

    for(i=num;i >= 1;i--){
        if(i%2!=0){
            printf(" %d ",i);
        }
    }

    printf("\n\n");
    printf("With while loop");

    i = num;

    while(i >= 1){
        if(i%2!=0){
            printf(" %d ",i);
        }
        i--;
    }
    printf("\n\n");
    printf("With do-while loop");

    i = num;

    do{
        if(i%2!=0){
            printf(" %d ",i);
        }
        i--;
    }while(i >= 1);
}