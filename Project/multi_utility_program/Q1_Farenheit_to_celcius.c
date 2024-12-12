#include <stdio.h>
#include <string.h>

int main() {
    float c, output, f;
    int decider;

    printf("Enter '1' to convert Celsius to Fahrenheit or '0' to convert Fahrenheit to Celsius: ");
    scanf("%d", &decider);

    if (decider == 1) {
        printf("Enter degree Celsius: ");
        scanf("%f", &c);
        output = (c * 9 / 5) + 32;
        printf("%.2f degree Celsius is %.2f Fahrenheit\n", c, output);
    } else if (decider == 0) {
        printf("Enter degree Fahrenheit: ");
        scanf("%f", &f);
        output = (f - 32) * 5 / 9;
        printf("%.2f degree Fahrenheit is %.2f Celsius\n", f, output);
    } else {
        printf("Invalid input. Please enter '1' or '0'.\n");
    }

    return 0;
}