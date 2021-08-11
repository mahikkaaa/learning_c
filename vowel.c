#include<stdio.h>
main()
{
    char var;
    printf("Enter any character ");
    scanf("%c",&var);
   // var=getchar();
    if(var=='a'||var=='i'||var=='o'||var=='e'||var=='u'||var=='A'||var=='E')
       {
        puts("It is a vowel");

       }
    else

        puts("it is a consonant");


}