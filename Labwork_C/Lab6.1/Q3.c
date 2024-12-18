#include <stdio.h>

int main(){
    int n , i;

    printf("Enter the number you want to print the loop to: ");
    scanf("%d",&n);

    printf("With for loop \n\n");
     
    for(i=1;i<=n;i++){
        printf(" %d \n",i);
    }
    printf("\n\n");
    printf("With while loop \n\n");

    i = 1;

    while(i<=n){
        printf(" %d \n",i);
        i++;
    }
    printf("\n\n");
    printf("With do-while loop \n\n");

    i = 1;

    do{
        printf(" %d \n",i);
        i++;
    }while(i <= n);
}