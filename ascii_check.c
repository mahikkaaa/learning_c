#include<stdio.h>
main()
{
  char num;
    printf("enter any character ");
    scanf("%c",&num);
    fflush(stdin);
    if(num>=65 && num<=90)
        puts("Capital case letter entered");
    else if(num>=97 && num<=122)
         puts("Small case letter entered");
    else if(num>=48 && num<=57 )
        puts("Digit  entered");
    else if((num>=0&& num<=47) ||(num>=58&& num<=64)||(num>=91 && num<=96)||(num>=123&&num<=127))
        puts("Special character entered");

}