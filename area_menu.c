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




/**
MODIFICATION 
//do-while loop using menu
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{ int choice;
  float l,b,area,peri,diagonal;

  do
   {

    printf("\n Rectangle Menu");
    printf("\n1. Area");
    printf("\n2. Perimeter");
    printf("\n3. Diagonal");
    printf("\n4.Exit");

    printf("\n Enter your choice ");
    scanf("%d",&choice);

   if(choice==1||choice==2||choice==3)
   {
    printf("Enter length ");
    scanf("%f",&l);
    printf("Enter breadth ");
    scanf("%f",&b);
   }
       switch(choice)
     {

       case 1: area=l*b;
               printf("\n Area is %f ",area);
               break;
       case 2: peri=2*(l+b);
               printf("\n Perimeter is %f ",peri);
               break;

       case 3:diagonal=sqrt((l*l)+(b*b));
              printf("\n Diagonal is %f ",diagonal);
              break;
       case 4: exit(0);        //terminate the program

       default :printf("\n Invalid choice ");
     }
     }while(choice !=4);
   }

**/
