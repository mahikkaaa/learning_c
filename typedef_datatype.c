#include<stdio.h>
main()
{
    typedef int age;
    typedef char name[15];

     age father;
     age mother;
     age son;

     printf("enter father's age : ");
     scanf("%d", &father);
     printf("enter mother's age : ");
     scanf("%d", &mother);
     printf("enter the age of son : ");
     scanf("%d", &son);

     name language;
     printf("which programming language are you learning : ");
     scanf("%s", &language);

     printf("\nFather's age %d",father);
     printf("\nMother's age %d",mother);
     printf("\nSon's age %d",son);

      printf("\n\n Language : %s",language);
}