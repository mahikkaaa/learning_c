//to print Fibonacci series
#include<stdio.h>
main()
{
   int num=0;
   int fn=0,sn=1,tn=0,i=0;

   printf("enter number you want to display in Fibonacci series ");
   scanf("%d",&num);

   printf("%d  %d",fn,sn);
   //printing series
   for(i=3;i<=num;i++)
   {   tn=fn+sn;
       printf("  %d",tn);
       fn=sn;
       sn=tn;
   }
}

/**
MODIFICATION 
#include<stdio.h>
main()
{
    int num,i=3;
    int firstnumber=0;
    int secondnumber=1;
    int thirdnumber;

    printf("Enter number upto which you want to print fiboncci number ");
    scanf("%d",&num);

    printf("\n %d\t%d",firstnumber,secondnumber);

    while(i<=num)   //for(i=3;i<=num;i++)
    {
        thirdnumber=firstnumber+secondnumber;
        printf("\t%d",thirdnumber);
        firstnumber=secondnumber;
        secondnumber=thirdnumber;
        i++;
    }


}




.
#include<stdio.h>
main()
{
    int i,n,first=0,second=1,third;

    printf("how many numbers you want to display in Fibonacci series ");
    scanf("%d",&n);

    printf("%d  %d ",first,second);

    for(i=0;i<=n;i++)
    {
        third=first+second;
        printf("%d ",third);
        first=second;
        second=third;
    }
}


**/



/**
FIBONACCI WITH RECURSION 
//Let's see an example to find the nth term of the Fibonacci series.
//0 1 1 2 3 5 8 ...
 #include<stdio.h>
int fibonacci(int);
void main ()
{
  int n,f;
  for(n=0;n<=10;n++)
  {f = fibonacci(n);
    printf("  %d",f);
  }
}

int fibonacci (int n)
{
 if (n==0)
 {
  return 0;
 }
 else if (n == 1)
 {
 return 1;
 }
 else
{
 return fibonacci(n-1)+fibonacci(n-2);
 }
}


**/
