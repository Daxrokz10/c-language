#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isdigit function

int main() {
    char num[100];
    int first_digit, last_digit, sum;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%s", num);

    // Validate input to ensure it's a number
    for (int i = 0; i < strlen(num); i++) {
        if (!isdigit(num[i])) {
            printf("Invalid input. Please enter a valid number.\n");
            return 1; // Exit the program if input is invalid
        }
    }

    // Convert first and last characters to integers
    first_digit = num[0] - '0'; // Convert ASCII to integer
    last_digit = num[strlen(num) - 1] - '0'; // Convert ASCII to integer

    // Calculate the sum
    sum = first_digit + last_digit;

    // Print the result
    printf("Sum of the first and last digit: %d\n", sum);

    return 0;
}