#include<stdio.h>
main()
{
    float basic_salary, hra, da, ta, gross_salary;
    char name[20];

    printf("enter name ");
    //scanf("%s",name);
    gets(name);

    printf("enter basic salary ");
    scanf("%f",&basic_salary);

    hra=bsalary*0.05;
    da=bsalary*0.04;
    ta=bsalary*0.07;

    gross_salary=basic_salary+hra+da+ta;

    printf("\n--------------------------");
    printf("\n Name : %s",name);
    printf("\n Basic Salary : %.2f",basic_salary);
    printf("\n HRA : %.2f",hra);
    printf("\n DA : %.2f",da);
    printf("\n TA : %.2f",ta);
    printf("\n Gross Salary : %f",gross_salary);
    printf("\n--------------------------");

}