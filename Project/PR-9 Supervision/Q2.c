#include <stdio.h>

typedef struct {
    int roll_no;
    char name[50];
    int chem_marks;
    int math_marks;
    int phy_marks;
    float percentage;
} Student;

int main() {
    Student students[5];
    int i;

    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Chemistry Marks (out of 100): ");
        scanf("%d", &students[i].chem_marks);

        printf("Enter Mathematics Marks (out of 100): ");
        scanf("%d", &students[i].math_marks);

        printf("Enter Physics Marks (out of 100): ");
        scanf("%d", &students[i].phy_marks);

        students[i].percentage = (students[i].chem_marks + students[i].math_marks + students[i].phy_marks) / 3.0;
    }

    printf("\nMark Sheet:\n");
    printf("%-10s %-20s %-10s %-10s %-10s %-10s\n", "Roll No", "Name", "Chemistry", "Maths", "Physics", "% Percentage");
    printf("----------------------------------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10d %-10d %-10d %-10.2f\n",
            students[i].roll_no, students[i].name, students[i].chem_marks,
            students[i].math_marks, students[i].phy_marks, students[i].percentage);
    }

    return 0;
}