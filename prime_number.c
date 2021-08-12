//program to check  prime number 
#include<stdio.h>
main()
{ //program to check  prime number between 1 and 100
    int num,i,j;
    char isprime='y';

  for(num=1;num<=100;num++)
   {
       for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
                {
                    isprime='n';
                    break;
                }

        }
        if(isprime=='y')
            {printf("\t %d",num);
            }
      isprime='y';
   }
}


/**
MODIFICATION
#include<stdio.h>
//program to check number is prime
main()
{
    int num,i;
    char isprime='y';

   printf("enter a number ");
   scanf("%d",&num);

   for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
                {
                    isprime='n';
                    break;
                }

        }
        if(isprime=='y')
            {
                printf("\t number is prime");
            }
        else
            {
                printf("\t number is not prime");

            }
}



#include<stdio.h>

main()
{ //program to check  prime number
    int num,i,j;
    char isprime='y';

    printf("enter any number ");
    scanf("%d",&num);
      if (num==2)
      {
          printf("It is not prime number ");
          exit(0);

      }
       for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
                {
                    isprime='n';
                    break;
                }
        }

        if(isprime=='y')
            {printf("number is prime");
            }
        else
            printf("Number is not prime ");

}



