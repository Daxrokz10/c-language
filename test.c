#include<stdio.h>
#include<string.h>
int main(){
    // int num1,num2,sum;
    // printf("enter num1:");
    // scanf("%d",&num1);

    // printf("enter num2:");
    // scanf("%d",&num2);

    // sum = num1+ num2;
    // printf("%d",sum);
    // return 0;

    // char str [] = "Daksh";
    // printf("String normal is: %s \n",str);
    // printf("String reversed is: %s",strrev(str));

    // return 0;

    // int i,n;
    // printf("give a number: ");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     printf("hello world\n");
    // }
    // return 0;


    // int length;
    // char name[15];
    // printf("Enter your name : ");
    // scanf("%s", name);
    // length = strlen(name);
    // printf("Length of your name is %d \n", length);

    // return 0;    
    
    char name[20];
    char fname[10] , lname[10];
    printf("Enter fname :");
    scanf("%s",fname);
    printf("Enter lname :");
    scanf("%s",lname);
    strcpy(name,fname);
    strcat(name,lname);
    sprintf(name, "%s %s", fname , lname);
    printf("Your name is %s\n",name);


    return 0;
}