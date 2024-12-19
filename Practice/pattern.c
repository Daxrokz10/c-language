// Q print patter 10,5,1,9,4,2,8,3,3
#include <stdio.h>

int main(){
    for(int i=10 , j=1;i>=8;i--,j++){
        printf("%d,%d,%d ",i,i-5,i-(i-j));
    }
}
