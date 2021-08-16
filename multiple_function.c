#include<stdio.h>
 main()
{
    int num,c,ans;

    int cube(int n);
    void table(int a);
    void chkprime(int b);

    printf("enter a number ");
    scanf("%d",&num);
    c=cube(num);
    printf("Cube is %d",c);

    table(num);

    chkprime(num);

}

int cube(int n)
{
    int result;
    result=n*n*n;
    return result;
}
void table(int a)
{
    int i;
   for(i=1;i<=10;i++)
   {
      printf("\n%d * %d =%d",a,i,a*i);
   }
}
void chkprime(int b)
{
    int flag=1,i;

    for(i=2;i<=b/2;i++)
    {
        if(b%i==0)
        {
            flag=0;
            break;

        }
    }
    if(flag==1)

        printf("\n\nnumber is prime");

    else
        printf("\n\nNumber is not prime");

}