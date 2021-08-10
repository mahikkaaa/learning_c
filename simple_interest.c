#include<stdio.h>
main()
{
    int principal,time;
    float rate,si;

    printf("enter value for principal ");
    scanf("%d",&principal);
    printf("enter value for time ");
    scanf("%d",&time);
    printf("enter value for rate ");
    scanf("%f",&rate);

    si=(principal*rate*time)/100;

    printf("\n Simple interest is %f ",si);
}