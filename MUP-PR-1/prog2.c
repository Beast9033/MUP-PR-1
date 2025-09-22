#include<stdio.h>

int main()
{
    int eId,basicsalary;
    float HRA, MA, DA, TA, PF, PT, gross, netsalary;
    char name[20];

    printf("Enter the eId:");
    scanf("%d",&eId);

    printf("Enter the Employee Name:");
    scanf("%s",&name);

    printf("Enter the Employee Basic Salary :");
    scanf("%d",&basicsalary);

    HRA = basicsalary * 0.3;
    MA = basicsalary * 0.05;
    DA = basicsalary * 0.1;
    TA = basicsalary * 0.07;
    PF = basicsalary * 0.12;
    PT = basicsalary * 0.05;

    gross = basicsalary + HRA + MA + DA + TA;
    netsalary = gross - PF - PT;

    printf("\n Gross of Employee:%.2f",gross);
    printf("\n Net Salary :%.2f",netsalary);

    return 0;
}