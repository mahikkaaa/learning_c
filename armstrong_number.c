#include<stdio.h>
//To find number Armstrong or not
//153,371,1634 (examples of Armstrong number)
main()
{   int num,n,total=0,digit;
    printf("Enter a number ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
  //  for( ; num!=0;num=num/10)
    {
        digit=num%10;
        total=total+(digit*digit*digit);
        num=num/10;
    }
    if(n==total)
        printf("\n %d is Armstrong number ",n);
    else
        printf("\n %d The number is not Armstrong number ",n);
}