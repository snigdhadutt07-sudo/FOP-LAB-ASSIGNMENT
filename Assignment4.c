//Assignment4
/*Write a C Program to calculate the salary of an employee given his basic pay (taken as input from the user). Calculate gross salary of employee. Let HRA be 10 % of basic pay and TA be 5% of basic pay. Let employees pay professional tax as 2% of total salary. Calculate net salary payable after deductions.*/
#include <stdio.h>

int main() {
    float basic, hra, ta, gross, tax, net;

    // Input basic salary
    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    // Calculate allowances
    hra = 0.10 * basic;   // 10% HRA
    ta  = 0.05 * basic;   // 5% TA

    // Calculate gross salary
    gross = basic + hra + ta;

    // Calculate professional tax (2% of gross)
    tax = 0.02 * gross;

    // Calculate net salary
    net = gross - tax;

    // Display results
    printf("\n--- Salary Details ---\n");
    printf("Basic Pay = %.2f\n", basic);
    printf("HRA (10%%) = %.2f\n", hra);
    printf("TA (5%%) = %.2f\n", ta);
    printf("Gross Salary = %.2f\n", gross);
    printf("Professional Tax (2%%) = %.2f\n", tax);
    printf("Net Salary = %.2f\n", net);

    return 0;
}
