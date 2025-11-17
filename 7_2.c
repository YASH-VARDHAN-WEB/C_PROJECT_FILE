// Write a C program to compute the monthly pay of 100 employees using each
// employee‗s name, basic pay. The DA is computed as 52% of the basic pay.
// Gross-salary (basic pay + DA). Print the employees name and gross salary
#include <stdio.h>
struct Employee // Structure to store employee details
{
    char name[50];
    float basicPay;
    float grossSalary;
};
int main()
{
    struct Employee emp[100]; // array for 100 employee
    float DA, Gs;             // Gs=Gross salary
    for (int i = 0; i < 100; i++)
    {
        printf("Enter Employee Name: \n");
        scanf("%s", emp[i].name);
        printf("Enter Basic Pay: \n");
        scanf("%f", &emp[i].basicPay);

        DA = 0.52 * emp[i].basicPay; // Calculate DA and basic Pay
        Gs = emp[i].basicPay + DA;
        printf("Name : %s\n", emp[i].name);
        printf("Gross Salary: %.2f\n", Gs);
        // Printf("Enter Gross Salary: ");
        // scanf("%f", &Employee.grossSalary emp[i]);
    }
    return 0;
}
