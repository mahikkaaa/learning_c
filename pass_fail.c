#include<stdio.h>
main()
{
    int th,pr;
    printf("Enter Theory marks ");
    scanf("%d",&th);
    printf("Enter Practical marks ");
    scanf("%d",&pr);

    if(th>=50 && pr>=50)
        printf("Student is pass");
    else
        printf("Student is Fail");
}