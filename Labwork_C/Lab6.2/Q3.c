// Q3 Print even number upto the entered num 

#include <stdio.h>

int main(){
    int n,i;

    printf("Enter till which number you want even numbers : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            printf(" %d ",i);
        }
    }
    i=1;
    printf("\n");
    while(i<=n){
         if(i%2==0){
            printf(" %d ",i);
        }
        i++;
    }
    i=1;
    printf("\n");
    do{
        if(i%2==0){
            printf(" %d ",i);
        }
        i++;
    }while(i<=n);
}