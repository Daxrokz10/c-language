#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter number for a: ");
    scanf("%d",&a);
    printf("Enter number for b: ");
    scanf("%d",&b);
    printf("Enter number for c: ");
    scanf("%d",&c);

    if(a < b){
        if(a < c){
            printf("%d is the smallest number",a);
        }
         else{
            printf("%d is the smallest number",c);
        }
    }else{
        if(b < c){
            printf("%d is the smallest number", b);
        }else {
            printf("%d is the smallest number",c);
        }
    }
}