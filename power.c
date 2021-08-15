//Program to calculate value for power
#include<stdio.h>
main()
{  void  power(int b,int e);
    int base,exp,result;

    printf("Enter base value ");
    scanf("%d",&base);
    printf("Enter exponent value ");
    scanf("%d",&exp);

    //calling or invoking of function
    power(base,exp);
    printf("\n\nI am back to main function ");

}
//definition of function
void  power(int b,int e)
{
    int temp=1,i;
    for(i=1;i<=e;i++)
    {
        temp=temp*b;
    }
    printf("power of %d raise to %d is %d",b,e,temp);
  return;
}