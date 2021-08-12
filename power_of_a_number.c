#include<stdio.h>
main()
{

    int base,exp,i,temp=1;
    printf("enter base number ");
    scanf("%d",&base);
    printf("enter exponent number ");
    scanf("%d",&exp);

    for(i=1;i<=exp;i++)
    {
        temp=base*temp;
    }

    printf ("\n%d raise to %d is %d",base,exp,temp);
  //printf ("\n%d ",temp);
}