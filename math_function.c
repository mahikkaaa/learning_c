//tO UNDERSTAND math function
#include<stdio.h>
#include<math.h>
main()
{
    int base=5;
    int exp=3;
    float ans;

    printf("%f",pow(base,exp));//argument or parameters

     ans= pow(5,3);
    printf("\n%.2f",ans);

   printf("\nSquaroot of 25 is %f",sqrt(25));
    printf("\n fabs= %f",fabs(-100));

    printf("\n ceil %f",ceil(2.1) );
    printf("\n floor %f",floor(2.7));
    printf("\nsin %f",sin(30));
    printf("\nModulus %f  ",fmod(10.5,3.2)); //%
    printf("\n Round %f",round(12.1));

}