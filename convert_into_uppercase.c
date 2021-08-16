#include<stdio.h>
main()
{ char ch,c;
char convert_into_upper(char chr);

     printf("enter any letter ");
     scanf("%c",&ch);
     c=convert_into_upper(ch);
     putchar(c);
}
char convert_into_upper(char chr)
{
    char ans;
    ans=toupper(chr);
    return ans;
}