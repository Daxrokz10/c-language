#include <stdio.h>

int main(){
    
    //Q1

    printf("Start of Prog 1\n\n");

    float x,y,ans;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);

    ans = ((x * x) + 2 * x * y + (y * y));

    printf("(x+y)^2 = %f\n\n",ans);
    return 0;
}