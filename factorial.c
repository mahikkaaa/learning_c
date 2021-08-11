//program to find factorial of a number
#include<stdio.h>
main()
{
  int  num,i,fact=1;
    printf("Enter a number ");
    scanf("%d",&num);
    i=num;
    while(i>=1)
    {
        fact=fact*i;
        i--;
    }
    printf("\nFactorial of %d is %d\n",num,fact);
}


/**
MODIFICATION

#include<stdio.h>
#include<math.h>
main()
{
   int num,i,fact=1;

    printf("Enter a number ");
    scanf("%d",&num);
    for(i=1,fact=1;i<=num;i++)
    {
        fact=fact*i;

    }
    printf("Factorial %d",fact);
}

**/


