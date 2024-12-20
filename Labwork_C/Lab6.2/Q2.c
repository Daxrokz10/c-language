// Q2 10 to 1

#include <stdio.h>

int main(){
    int i;
    i=10;
    for(i;i>=1;i--){
        printf("%d\n",i);
    }
    i=10;
    while(i>=10){
        printf("%d\n",i);
        i--;
    }
    i=10;
    do{
        printf("%d\n",i);
        i--;
    }while(i>=10);
}