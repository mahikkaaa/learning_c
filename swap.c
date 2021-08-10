//swapping of numbers 
#include<stdio.h>
main()
{
    int num1, num2, temp;
    printf("enter num1 : ");
    scanf("%d", &num1);
    printf("enter num2 : ");
    scanf("%d", &num2)
/*
//without using third variable
    num1=num1+num2; 
    num2=num1-num2; 
    num1=num1-num2; 

    printf("\n num1 =%d",num1);
    printf("\n num2 =%d",num2);
*/

    //with using third variable
     temp=num1;
     num1=num2;
     num2=temp;
    printf("\n num1 =%d",num1);
    printf("\n num2 =%d",num2);

}