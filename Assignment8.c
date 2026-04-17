//Assignment8 
/*To accept a student's five course marks and compute his/her result. Student is passing if he/she scores marks equal to and above 40 in each course. If student scores aggregate greater than 75%,then the grade is distinguished. If aggregate is 60>= and <75 then the grade of first division. If aggregate is 50>= and <60, then the grade is second division. If aggregate is 40>= and <50, then the grade is third division*/
#include <stdio.h>
int main() {
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter marks of 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &m1);
    printf("Subject 2: ");
    scanf("%f", &m2);
    printf("Subject 3: ");
    scanf("%f", &m3);
    printf("Subject 4: ");
    scanf("%f", &m4);
    printf("Subject 5: ");
    scanf("%f", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    printf("\n--- Result ---\n");
    printf("Roll No: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f\n", percentage);
    if(m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("Result: Fail\n");
        printf("Grade: No Division\n");
    } else {
        printf("Result: Pass\n");

        if(percentage > 75)
            printf("Grade: Distinction\n");
        else if(percentage >= 60)
            printf("Grade: First Division\n");
        else if(percentage >= 50)
            printf("Grade: Second Division\n");
        else if(percentage >= 40)
            printf("Grade: Third Division\n");
    }

    return 0;
}
