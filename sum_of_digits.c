/*program to find number of digits in number
 and sum of digits */

#include<stdio.h>
main()
{int num,rem,digitcounts=0,sum=0;

    printf("enter any number ");
    scanf("%d",&num);

    while(num!=0)
    {
      rem=num%10;
      digitcounts++;
      sum=sum+rem;
    //  printf("\n Remainder %d ",rem);
      num=num/10;
     // printf("\n number %d ",num);
    }

    printf("\n\nNumber of digits present is %d",digitcounts);
    printf("\n\nSum of digits is %d",sum);

}