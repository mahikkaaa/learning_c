#include<stdio.h>
main()
{
    char gender;
    int yos,salary,qual;
    printf("Enter Gender (M) for Male and (F) for female ");
    scanf("%c",&gender);

    printf("Enter number of service years ");
    scanf("%d",&yos);

    printf("Enter qualification (1-Post graduate and 0 for Graduate ");
    scanf("%d",&qual);

    if(gender=='M' && yos>=10 && qual==1)
        printf("Salary is 15000");
    else if(gender=='M' && yos>=10 && qual==0)
        printf("Salary is 10000");
    else if(gender=='M' && yos<10 && qual==1)
       printf("Salary is 10000");
    else if(gender=='M' && yos<10 && qual==0)
       printf("Salary is 7000");
    else if(gender=='F' && yos>=10 && qual==1)
            puts("Salary is 12000")  ;
}