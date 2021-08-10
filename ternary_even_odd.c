#include<stdio.h>
//this is example of conditional operator
main()
{
  int num;
  printf("enter a number ");
  scanf("%d",&num);

  (num%2==0)?puts("Number is even "):puts("Number is odd");

}