// Q1 1 to 10 with loop

#include <stdio.h>

int main(){
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d \n", i);
    }

    i = 1;

    while(i<=10){
        printf("%d \n", i);
        i++;
    }

    i = 1;

    do{
        printf("%d \n", i);
        i++;
    }while(i<=10);
}