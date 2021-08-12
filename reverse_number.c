#include<stdio.h>
//reversing a number
main()
{   int originalnumber,n,remainder,reversenumber=0;
    printf("Enter a number ");
    scanf("%d",&originalnumber);//1234

    n=originalnumber;

    while(originalnumber!=0)
    {
        remainder=originalnumber%10; //3
        reversenumber=reversenumber*10+remainder;//
        originalnumber=originalnumber/10;//
    }
    printf("\n Reverse number of %d is %d\n\n",n,reversenumber);
}