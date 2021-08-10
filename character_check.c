#include<stdio.h>
main()
{
    char ch;
    printf("enter any character ");
    ch=getchar();

   fflush(stdin);
    if(ch>='A' && ch<='Z')
        puts("Capital case letter entered");
    else if(ch>='a' && ch<='z')
         puts("Small case letter entered");
    else if(ch>='0' && ch<='9' )
        puts("Digit entered");
    else
        puts("Special character entered");

}
