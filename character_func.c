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


/**
MODIFICATION

#include<stdio.h>
#include<ctype.h>
main()
{
    char ch;
    printf("enter a single character ");
    ch=getchar();

    if(isalpha(ch))
    {
        if(isupper(ch))
       {
         ch=tolower(ch);
         printf("\n Ch is %c",ch);

       }
       else if(islower(ch))
       {
           ch=toupper(ch);
           printf("\n Ch is %c",ch);

       }
    }
  else if(isdigit(ch))
    {
        printf("It is a digit");
    }
  else
    {

        printf("\n It must be special character");
    }

}
**/
