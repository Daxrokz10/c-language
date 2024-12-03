#include <stdio.h>

int main(){
    int i,j,num;
    num=1;

    for(i=1;i<=3;i++){
        for(j=1;j<=9;j++){
            printf(" %d ",num);
            num++;
        }
        printf("\n");
    }
}