//tO UNDERSTAND STRING FUNCTIONS
#include<stdio.h>
#include<string.h>
main()
{
    char str1[50];
    int len;
    printf("Enter a string ");
    gets(str1);
    printf("\n%s",str1);
    len=strlen(str1);
    printf("\n Length of string is %d",len);
//or
    printf("\n Length of string is %d",strlen(str1));
}
