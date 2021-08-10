#include <stdio.h>
main()
{
int a, b, c;
printf("\nEnter Three numbers = ");
scanf("%d%d%d", &a, &b, &c);
if ((a < b) && (a < c))
   {
      printf("\na = %d is the smallest.", a);
   }
else  if((b < c ) && (b<a))
    {
     printf("\nb = %d is the smallest.", b);
    }
else
    {
      printf("\nc = %d is the smallest.", c);
    }
}