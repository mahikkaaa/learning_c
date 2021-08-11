#include<stdio.h>
main()
{   char choice;
    int num1,num2,result;

    printf("\n\t\t\tMenu");
    printf("\n\n\t\t A. Addition");
    printf("\n\n\t\t B. Subtraction");
    printf("\n\n\t\t C. Multiplication");
    printf("\n\n\t\t D. Division");
    printf("\n\n\t\t Enter your choice ");
    scanf("%c",&choice);


    if(choice=='A' || choice=='a')
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);

      result=num1+num2;
      printf("\n%d",result);

    }
    else if(choice=='B' || choice=='b')
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);
      result=num1-num2;
      printf("\n%d",result);

    }
    else if(choice=='C' || choice=='c')
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);
      result=num1*num2;
      printf("\n%d",result);

    }
    else if(choice=='D' || choice=='d')
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);
      result=num1/num2;
      printf("\n%d",result);

    }

    }