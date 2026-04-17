//Assignment7
/*Write a C program to accept student details and display their result using an array of structures.*/
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float percentage;
    char grade;
};
int main() {
    int i, j, n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Enter marks of 3 subjects:\n");
        s[i].total = 0;
        for(j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / 3;
        if(s[i].percentage >= 75)
            s[i].grade = 'A';
        else if(s[i].percentage >= 60)
            s[i].grade = 'B';
        else if(s[i].percentage >= 50)
            s[i].grade = 'C';
        else
            s[i].grade = 'F';
    }
    printf("\n--- Student Results ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %.2f\n", s[i].total);
        printf("Percentage: %.2f\n", s[i].percentage);
        printf("Grade: %c\n", s[i].grade);
    }
    return 0;
}
