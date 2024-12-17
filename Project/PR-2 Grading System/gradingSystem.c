#include <stdio.h>

int main(){
    int marks , grade_case;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    grade_case = (marks > 90 && marks <= 100) ? (printf("A1 "), 1) :
                 (marks > 80 && marks <= 90) ? (printf("A2 "), 2) :
                 (marks > 70 && marks <= 80) ? (printf("B1 "), 3) :
                 (marks > 60 && marks <= 70) ? (printf("B2 "), 4) :
                 (marks > 50 && marks <= 60) ? (printf("C1 "), 5) :
                 (marks > 40 && marks <= 50) ? (printf("C2 "), 6) :
                 (marks > 0 && marks <= 40) ? (printf("F "), 7) :
                 (printf("Invalid marks"), 0);
    

    switch(grade_case){
        case 1:
        printf("Excellent work");
        break;
        case 2:
        printf("Nice work");
        break;
        case 3:
        printf("Good work");
        break;
        case 4:
        printf("Fair work");
        break;
        case 5:
        printf("Poor work");
        break;
        case 6:
        printf("Very poor work");
        break;
        case 7:
        printf("You failed");
        break; 
        default:
        printf("N/A");
        break;
    }
    if(grade_case >= 1 && grade_case <= 6){
        printf(" , You are Eligible.");
    }else{
        printf(" , You have to reappear for the exam.");
    }

}                               