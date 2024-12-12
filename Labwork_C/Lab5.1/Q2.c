#include <stdio.h>

int main(){
    int a,b,c,d;

    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("Enter the value of C: ");
    scanf("%d",&c);
    printf("Enter the value of D: ");
    scanf("%d",&d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("%d is the largest",a);
            }
            else{
                printf("%d is the largest",d);
            }
        }
        else{
            printf("%d is the largest",c);
        }
    }

    else if(b>a){
        if(b>c){
            if(b>d){
                printf("%d is the largest",b);
            }
            else{
                printf("%d is the largest",d);
            }
        }
        else{
            printf("%d is the largest",c);
        }
    }
    else{
        if(a == b){
            if(a == c){
                if(a == d){
                    printf("All numbers are equal");
                }
            }
        }
    }
    
}