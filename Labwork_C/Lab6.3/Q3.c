// Q3 print table of inputed number 

#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("Table of %d:\n",i);
        for(j=1;j<=10;j++){
            printf("%d * %d = %d \n",i,j,i*j);
        }
    }
}