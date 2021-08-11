 //Program to enter a number until user enters zero and find total
 // of numbers entered
 #include<stdio.h>
main()
{
   int num=0,total=0;

   do
   {   printf("Enter any number ");
       scanf("%d",&num);

       total=num+total;

   }while(num!=0);

   printf("\n Total is %d",total);
}