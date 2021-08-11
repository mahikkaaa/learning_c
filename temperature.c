#include<stdio.h>

main()
{
  float Temp_f,Temp_c;
  int choice;
  printf("Menu");
  printf("\n 1. Temp F to C");
  printf("\n 2. Temp C to F");

  printf("\n enter you choice ");
  scanf("%d" ,&choice);


  if(choice==1)
  {
      printf("Enter temperature in Fahrenheit ");
      scanf("%f",&Temp_f);

      Temp_c=(Temp_f-32)*5/9;

      printf("\n Temperature in Celsius is %.2f \n\n ",Temp_c);
  }

  else if (choice==2)
  {
      printf("Enter temperature in Celsius ");
      scanf("%f",&Temp_c);

      Temp_f=(Temp_c*9/5)+32;

    printf("\n Temperature in Fahrenheit is %.2f \n\n ",Temp_f);
  }

  else
    {
        printf("Invalid choice".);
    }

}



