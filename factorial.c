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


/**
MODIFICATION
#include<stdio.h>
main()
{
  long  num,i,fact=1;

    for(num=1;num<=10;num++)
    {
       for(i=1;i<=num;i++)
       {
        fact=fact*i;
       }
       printf("\nFactorial of %d is %d",num,fact);
       fact=1;
    }
}
**/



/**
FACTORIAL WITH RECURSION 

#include<stdio.h>
main()
{ int num,f;
  int factorial(int n);
  printf("Enter number ");
  scanf("%d",&num);
  f=factorial(num);
  printf("Factorial is %d",f);
}
int factorial(int n)
{
     if(n==1)
       return 1;
     else if (n==0)
        return 0;
     else
     {
        return(n*factorial(n-1));
     }
}

**/
