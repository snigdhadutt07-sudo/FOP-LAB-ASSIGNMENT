//Assignment 19
/* Create Structure EMPLOYEE for storing details (Name, Designation, gender, Date of Joining and Salary). Define function members to compute a) total number of employees in an organization b) count of male and female employee c) Employee with salary more than 10,000 d) Employee with designation “Asst Manager”*/
#include <stdio.h>
#include <string.h>
#define MAX 100
struct EMPLOYEE {
    char name[50];
    char designation[30];
    char gender[10];
    char doj[15];
    float salary;
};
void countGender(struct EMPLOYEE e[], int n);
void highSalary(struct EMPLOYEE e[], int n);
void asstManager(struct EMPLOYEE e[], int n);
int main() {
    struct EMPLOYEE e[MAX];
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Designation: ");
        scanf("%s", e[i].designation);
        printf("Gender (Male/Female): ");
        scanf("%s", e[i].gender);
        printf("Date of Joining: ");
        scanf("%s", e[i].doj);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    printf("\nTotal number of employees = %d\n", n);
    countGender(e, n);
    highSalary(e, n);
    asstManager(e, n);
    return 0;
}
void countGender(struct EMPLOYEE e[], int n) {
    int male = 0, female = 0, i;
    for(i = 0; i < n; i++) {
        if(strcmp(e[i].gender, "Male") == 0)
            male++;
        else if(strcmp(e[i].gender, "Female") == 0)
            female++;
    }
    printf("\nMale Employees = %d\n", male);
    printf("Female Employees = %d\n", female);
}
void highSalary(struct EMPLOYEE e[], int n) {
    int i;
    printf("\nEmployees with salary > 10000:\n");
    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s\n", e[i].name);
        }
    }
}
void asstManager(struct EMPLOYEE e[], int n) {
    int i;
    printf("\nAsst Manager Employees:\n");
    for(i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "AsstManager") == 0 ||
           strcmp(e[i].designation, "Asst_Manager") == 0) {
            printf("%s\n", e[i].name);
        }
    }
}
