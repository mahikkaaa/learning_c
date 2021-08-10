#include<stdio.h>
// To calculate area of circle and perimeter
main()
{
   float radius,area,perimeter;
   printf("enter radius for circle ");
   scanf("%f",&radius);
   area=3.14*radius*radius;

   printf("\n Area of circle %f",area);
   
   perimeter=2*3.14*radius;
   printf("\n Perimeter of circle %f",perimeter);
}