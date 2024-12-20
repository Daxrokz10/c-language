// Q2 Factorial of N number

#include <stdio.h>

int main(){
    int n,i,fact;
    fact = 1;
   
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for( i = 1 ; i <= n ;i++){
        fact*=i;
    }
    printf("Factorial of %d is %d",n,fact);
    
}