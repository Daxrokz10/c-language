#include <stdio.h>

int main(){
    int num , i;

    printf("Enter the number to which you want the odd numbers : ");
    scanf("%d",&num);

    printf("With for loop");

    for(i=1;i<=num;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }

    printf("\n\n");
    printf("With while loop");

    i = 1;

    while(i <= num){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
    printf("\n\n");
    printf("With do-while loop");

    i = 1;

    do{
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }while(i <= num);
}