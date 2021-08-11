//Program to convert a number Decimal to Binary

#include<stdio.h>
main()
 {
   int decimal;
   int binary[40];
   int index = 0;
   puts("Enter  any decimal number : ");
   scanf("%d",&decimal);
   while(decimal > 0)
   {
      binary[index++] = decimal%2;
      decimal = decimal/2;
   }
   for(int i=index-1;i >= 0;i--)
   {
      printf("%d",binary[i]);
   }
   printf("\n");//new line



 }