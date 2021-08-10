#include<stdio.h>
//program to understand char data type
main()
{
  char name[10],gender;
  int age;
  printf("Enter your name ");
  gets(name);

  fflush(stdin);
  printf("enter your age ");
  scanf("%d",&age);
  fflush(stdin);

  printf("Enter gender (M/F) ");
  gets(gender);
  fflush(stdin);

  printf("\nHello , Your name is %s and age is %d  ",name,age);
  printf("\nGender is %c ",gender);

  puts("\nGood afternoon");
  puts(name);
  puts(gender);
  puts(age);
}
