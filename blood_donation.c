#include <stdio.h>
main()
{
  int age;
  float weight;

  printf("enter age ");
  scanf("%d",&age);
  printf("enter weight ");
  scanf("%f",&weight);

  if(age>=18 && weight>=50)
      {

          printf("you are eligible for blood donation\n\n");
      }
      else
      {
          printf("you are not eligible for blood donation\n\n");

      }

}