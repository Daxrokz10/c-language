#include <stdio.h>

int main(){
    
    float angle_one , angle_two , angle_three;

    printf("Enter the first angle in degrees: ");
    scanf("%f",&angle_one);
    printf("Enter the second angle in degrees: ");
    scanf("%f",&angle_two);

    angle_three = 180 - (angle_one + angle_two);

    printf("The thrid unknown angle is = %.2f degrees",angle_three);

}