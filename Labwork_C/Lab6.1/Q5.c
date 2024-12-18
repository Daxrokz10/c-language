#include <stdio.h>

int main(){
    int first_year,second_year,orignal_first_year;

    printf("Enter the first year: ");
    scanf("%d",&first_year);

    orignal_first_year = first_year;

    printf("Enter the second year: ");
    scanf("%d",&second_year);

    printf("With for loop\n\n");

    for(first_year;first_year <= second_year ; first_year++){
        if(first_year %4==0){
            printf(" Year %d is a leap year\n",first_year);
        }
    }

    printf("\n\n");
    
    printf("With while loop\n\n");

    first_year = orignal_first_year;

    while(first_year<=second_year){
        if(first_year %4==0){
            printf(" Year %d is a leap year\n",first_year);
        }
        first_year++;
    }
    printf("\n\n");

    printf("With do while loop\n\n");

    first_year = orignal_first_year;

    do{
        if(first_year %4==0){
            printf(" Year %d is a leap year\n",first_year);
        }
        first_year++;
    }while(first_year <=second_year);
}