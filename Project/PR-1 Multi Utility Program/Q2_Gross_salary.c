#include <stdio.h>

int main(){

    float base_salary,DA,TA,HRA,total_percentage,gross_salary;

    printf("Enter Your Base Salary: ");
    scanf("%f",&base_salary);

    printf("Enter Your DA in %%: ");
    scanf("%f",&DA);
    printf("Enter Your TA in %%: ");
    scanf("%f",&TA);
    printf("Enter Your HRA in %%: ");
    scanf("%f",&HRA);

    total_percentage = DA + TA + HRA;
    gross_salary = base_salary + (base_salary * total_percentage / 100);

    printf("Gross Salary is = %.2f",gross_salary);


}