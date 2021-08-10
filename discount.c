#include<stdio.h>
main()
{
   float purchase_amount, discount, amount_to_be_paid;

   printf("enter purchase amount : ");
   scanf("%f",&purchase_amount);

   discount=purchase_amount*0.10;

   amount_to_be_paid=purchase_amount-discount;

   printf("\n You get discount of Rs %f", discount);
   printf("\nAmount to be paid by customer is %f\n\n",amount_to_be_paid);

}