// Q1: Max of three num using ternary operator 

#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("Enter number 3: ");
    scanf("%d",&c);

    if(a==b && b==c){
        printf("All numbers are equal");
    }else{
        (a>b) ? 
        (a>c) ? printf("%d is the largest number") : 
            printf("%d is the largest number",c) :
        (b>c) ? printf("%d is the largest number",b) :
             printf("%d is the largest number",c) ;
    }
   
        
}