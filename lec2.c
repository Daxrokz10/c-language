#include <stdio.h>
#include <conio.h>

int main(){
    //Q1

    printf("Start of Program 1\n\n");

    char name[50],age[3],school[100];

    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your age: ");
    scanf("%s",&age);
    printf("Enter your school name: ");
    scanf("%s",&school);


    printf("Your name is: %s\n",name);
    printf("Your age is: %s\n",age);
    printf("Your school name is: %s\n\n",school);
   
    // // // Q2

    printf("Start of Program 2\n\n");

    for(int i=1;i<=7;i++){
        if(i==1 || i==7){
            printf("--------\n");
        }
        else if(i==2 || i==6){
            printf("|       |\n");
        }
        else if(i == 3){
            printf("R       |\n");
        }
        else if(i == 4){
            printf("N       |\n");
        }
        else if(i == 5){
            printf("W       |\n");
        }
    }

    // // Q3

    printf("Start of Program 3\n\n");

     
    for (int i = 1; i <= 5; i++) {
        if (i <= 3) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
        } else {
            
            for (int j = 6; j > i; j--) {
                printf("* ");
            }
        }
        printf("\n");
    }

    // Q4

    printf("Start of Program 4\n\n");

    printf("*\n");
    printf("*\n");
    printf("*\n");
    printf("*\n");
    printf("*      * *          *\n");
    printf("*    *     *       *\n");
    printf("*   *       *     *\n");
    printf("*  *          * *\n");
    printf("* * \n");
    return 0;
   
}