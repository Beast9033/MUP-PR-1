#include<stdio.h>

int main()
{
    int eId,basicsalary;
    float HRA, DA, TA, gross;
    char name[20];

    printf("Enter the Employee Id: ");
    scanf("%d", &eId);

    printf("Enter the Employee Name: ");
    scanf("%s", &name);

    printf("Enter the Employee Basic Salary: ");
    scanf("%d", &basicsalary);

    HRA = basicsalary * 0.10;
    DA = basicsalary * 0.05;
    TA = basicsalary * 0.08;

    gross = basicsalary + HRA + DA + TA;

    printf("\n Name: ", name);
    printf("\n Id: ", eId);
    printf("\n Gross Salary: %.2f", gross);

    return 0;
}