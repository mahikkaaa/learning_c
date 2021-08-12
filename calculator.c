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



//MODIFICATION
/**
    #include<stdio.h>
main()
{   int choice;
    int num1,num2,result;

    printf("\n\n\t\t\tMenu");
    printf("\n\t\t----------------");
    printf("\n\t\t 1. Addition");
    printf("\n\t\t 2. Subtraction");
    printf("\n\t\t 3. Multiplication");
    printf("\n\t\t 4. division");

    printf("\n\n\t\t Enter your choice ");
    scanf("%d",&choice);

    if(choice==1)
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);

      result=num1+num2;
      printf("\n%d",result);

    }
    else if(choice==2)
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);
      result=num1-num2;
      printf("\n%d",result);

    }
    else if(choice==3)
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);

      result=num1*num2;
      printf("\n%d",result);

    }
  else if(choice==4)
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);
       if(num2!=0)
         {result=num1/num2;
          printf("\n%d",result);
         }
        else
            printf("\n You can not divide a number by zero");

    }
    else
        printf("\n Invalid choice ");


    }

    **/


    //MODIFICATION
    /**

    #include<stdio.h>
main()
{   int choice,i;
    int num1,num2,result;

    printf("\n\n\t\t\tMenu");
    printf("\n\t\t 1. Addition");
    printf("\n\t\t 2. Subtraction");
    printf("\n\t\t 3. Exit");

    printf("\n\n\t\t Enter your choice ");
    scanf("%d",&choice);
    if(choice>=1)
    {

       if (choice<=2)
       {
         printf("Enter first number ");
         scanf("%d",&num1);
         printf("Enter second number ");
         scanf("%d",&num2);
         if(choice==1)
          {
            result=num1+num2;
            printf("\n%d",result);
          }
          else if(choice==2)
          {
           result=num1-num2;
            printf("\n%d",result);
          }
       }
       else if (choice==3)
        {   printf("Exiting...");
           exit(0);
        }
       else
        {
           printf("Invalid choice");
        }
    }
}

**/


    //MODIFICATION
    /**

#include<stdio.h>
main()
{   int choic=1,i;
    int num1,num2,result;
    while (choic!=3)
   {
    printf("\n\n\t\t\tMenu");
    printf("\n\t\t 1. Addition");
    printf("\n\t\t 2. Subtraction");
    printf("\n\t\t 3. Exit");

    printf("\n\n\t\t Enter your choice ");
    scanf("%d",&choic);


    if(choic==1)
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);

      result=num1+num2;
      printf("\n%d",result);

    }
    else if(choic==2)
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);
      result=num1-num2;
      printf("\n%d",result);

    }
    else if (choic==3)
    {   printf("Exiting...");
        exit(0);
    }
   }


}    

**/

    //MODIFICATION
    /**

#include<stdio.h>
main()
{   int choice,i;
    int num1,num2,result;
    do
   {
    printf("\n\n\t\t\tMenu");
    printf("\n\n\t\t1.Addition");
    printf("\n\n\t\t2.Subtraction");
    printf("\n\n\t\t3.Exit");

    printf("\n\n\t\t Enter your choice ");
    scanf("%d",&choice);


    if(choice==1)
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);

      result=num1+num2;
      printf("\n%d",result);

    }
    else if(choice==2)
    { printf("Enter first number ");
      scanf("%d",&num1);
      printf("Enter second number ");
      scanf("%d",&num2);
      result=num1-num2;
      printf("\n%d",result);

    }
    else if (choice==3)
    {   printf("Exiting...");
        exit(0);
    }
   }while(choice<=3);


}

**/ 
