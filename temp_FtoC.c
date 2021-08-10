#include<stdio.h>
main()
{
    float Temp_f,Temp_c;

    printf("Enter temperature in Fahrenheit ");
    scanf("%f",&Temp_f);

    Temp_c=(Temp_f-32)*5/9;

    printf("\n Temperature in Celcius is %.2f \n\n ",Temp_c);
}