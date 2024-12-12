#include <stdio.h>
#include <conio.h>

int main(){

    // Q1

    printf("Start of Program 1 \n\n\n");

    const float PI = 3.14;
    int r;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    int area = PI*(r*r);
    printf("Area of the circle is: %d\n\n",area);

    // Q2

    printf("Start of program 2\n\n");

    float length,width;

    printf("Length of rectangle: ");
    scanf("%f",&length);
    printf("Width of rectangle: ");
    scanf("%f",&width);
    printf("Area of rectangle is: %f\n\n",length*width);

    // Q3

    printf("Start of program 3\n\n");

    float base, height, areatri;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    areatri = 0.5 * base * height;

    printf("The area of the triangle is: %f\n\n", areatri);

    // Q4

    printf("Start of program 4\n\n");

    float principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("The simple interest is: %.2f\n\n", simpleInterest);

    // Q5

    printf("Start of program 5\n\n");

    printf("We will use the same radius of the circle as the first question\n");
    int perimeter = 2*PI*r;
    printf("Perimeter of the circle is: %d\n\n",perimeter);
}
