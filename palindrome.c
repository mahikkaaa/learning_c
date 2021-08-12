#include<stdio.h>
//checking whether number is palindrome or not
main()
{   int num,n,digit,rev=0;
    printf("Enter a number ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("\nThe reverse number is %d ",rev);
    if(n==rev)
        printf("\n number is palindrome\n\n");
    else
        printf("\n number is not palindrome\n\n");
}

