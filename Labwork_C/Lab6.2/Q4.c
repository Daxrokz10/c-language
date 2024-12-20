// Q4 Fibbo series upto entered num 

#include <stdio.h>

int main(){
    int fib1,n,fib2,temp;
    fib1=0;
    fib2=1;
    
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if (i == 0) { 
            printf("%d ", fib1); 
        } else if (i == 1) { 
            printf("%d ", fib2); 
        }else {
            temp = fib1 + fib2; 
            printf("%d ", temp); 
            fib1 = fib2; 
            fib2 = temp; 
        }
    }
        printf("\n"); 
    return 0;
}