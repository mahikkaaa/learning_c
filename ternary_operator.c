#include<stdio.h>
//Ternary operator
main()
{
   int a=5,b=10;


   b=(a!=0)?b/a:0;  //b=b/a if a is not equal to 0 and if a is equal to 0 then b is also equal to zero

   printf("%d",b);

}