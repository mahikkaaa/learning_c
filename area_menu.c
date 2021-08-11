#include<stdio.h>
main()
{ char choice;
  float r,x,y,b,h,area;

  printf("\n\n\t\t area menu ");
  printf("\n\t\t C. circle");
  printf("\n\t\t R. rectangle");
  printf("\n\t\t T. triangle");

  printf("\n\n\tenter your choice : ");
  scanf("%c",&choice);

  switch(choice)
 { case 'C' :
   dacase 'c':
      printf("enter radius of a circle : ");
      scanf("%f",&r);
      area=3.14*r*r;
      printf("area of the circle is %f",area);
      break;

  case 'R':
  dacase 'r':
      printf("enter length of rectangle : ");
      scanf("%f",&x);
      printf("enter breadth of rectangle : ");
      scanf("%f",&y);
      area=x*y;
      printf("area of rectangle is %f",area);
       break;
  case 'T':
  dacase 't':
        printf("enter base of triangle : ");
      scanf("%f",&b);
      printf("enter height of triangle : ");
      scanf("%f",&h);
      area=0.5*b*h;
      printf("area of triangle is %f",area);
       break;
  default:
    printf("\n\ninvalid choice");
}
}

/**
MODIFICATION 

#include<stdio.h>
main()
{ int choice;
  float r,x,y,b,h,area;

  printf("\n\n\t\t area menu ");
  printf("\n\t\t 1. circle");
  printf("\n\t\t 2. rectangle");
  printf("\n\t\t 3. triangle");

  printf("\n\n\tenter your choice : ");
  scanf("%d",&choice);

  switch(choice)
 { case 1:
      printf("enter radius of a circle : ");
      scanf("%f",&r);
      area=3.14*r*r;
      printf("area of the circle is %f",area);
      break;

  case 2:

      printf("enter length of rectangle : ");
      scanf("%f",&x);
      printf("enter breadth of rectangle : ");
      scanf("%f",&y);
      area=x*y;
      printf("area of rectangle is %f",area);
       break;
  case 3:
        printf("enter base of triangle : ");
      scanf("%f",&b);
      printf("enter height of triangle : ");
      scanf("%f",&h);
      area=0.5*b*h;
      printf("area of triangle is %f",area);
       break;
  default:
    printf("\n\ninvalid choice");
}
}
**/