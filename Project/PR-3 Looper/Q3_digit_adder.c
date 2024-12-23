#include <stdio.h>
#include <string.h>

int main() {
    char num[100]; 
    int first_digit, last_digit, sum;

   
    printf("Enter a number: ");
    scanf("%s", num);


    first_digit = num[0]; //number one is the first digit of the number
    last_digit = num[0]; //temporary value assigned to lastdigit


    for (int i = 0; i < strlen(num); i++) {  //use strlen to find length of number
        if (i == strlen(num) - 1) {//when the number of the string is last store that value in last digit
            last_digit = num[i] - '0'; 
        }
    }

 
    sum = first_digit + last_digit;//sum and print


    printf("Sum of the first and last digit: %d\n", sum);

    return 0;
}