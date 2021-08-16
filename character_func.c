//tO UNDERSTAND character function
#include<stdio.h>
#include<ctype.h>
main()
{
 char ch='A';
 printf("%d",isalpha(ch));
 printf("\n%d",isdigit(ch));
 printf("\n%c",toupper(ch));
 printf("\n%c",tolower(ch));
 printf("\n%d",ch);
}