// Q1 Sum of all num from 1 to N 

#include <stdio.h>

int main(){
    int n,i,temp;
    temp = 0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        temp+=i;
      
    }
      printf("%d",temp);        
}