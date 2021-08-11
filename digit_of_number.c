#include<stdio.h>
main()
{   int num,rem,countdigits=0,sum=0;
    printf("Enter a number ");
    scanf("%d",&num);
    while(num!=0)
    {
         rem=num%10;
         countdigits++;
         printf("\n%d",rem);
         sum=sum+rem;
         num=num/10;

    }
    printf("\n Total digits in number is %d",countdigits);
    printf("\n Sum of digits in number is %d",sum);
}