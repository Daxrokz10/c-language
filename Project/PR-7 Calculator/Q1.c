//Q1 UDF Calculator

#include <stdio.h>
#include <math.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int multi(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    int n1,n2;
    int condition;
    
    do{
    printf("Enter the number --->\n");
    printf("Enter 1 for add\n");
    printf("Enter 2 for sub\n");
    printf("Enter 3 for multi\n");
    printf("Enter 4 for div\n");
    printf("Enter 0 to exit\n");

    scanf("%d",&condition);

    switch(condition){
        case 1:
            printf("Enter the numbers:- ");
            scanf("%d %d",&n1,&n2);
            printf("The sum is %d\n",add(n1,n2));
            break;
        case 2:
            printf("Enter the numbers:- ");
            scanf("%d %d",&n1,&n2);
            printf("The difference is %d\n",sub(n1,n2));
            break;
        case 3:
            printf("Enter the numbers:- ");
            scanf("%d %d",&n1,&n2);
            printf("The product is %d\n",multi(n1,n2));
            break;
        case 4:
            printf("Enter the numbers:- ");
            scanf("%d %d",&n1,&n2);
            printf("The division is %d\n",div(n1,n2));
            break;
        default:
            printf("Invalid Input\n");
    }
    }
    while(condition!=0);


}