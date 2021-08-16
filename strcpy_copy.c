//copying one string into another string
#include<stdio.h>
#include<string.h>
main()
{
    char name1[15]="aniruddha";
    char name2[15]="mehta";
    char name3[15];

    strcpy(name2,name1);
    printf("\n Name2 =%s",name2);
    printf("\n Name1 =%s",name1);

    printf("\n Name2 =%s",strcpy(name2,name1));

    strncpy(name3,name1,4);
    name3[4]='\0';  //null character
    printf("\n Name3 =%s",name3);
    printf("\n Name1 =%s",name1);
}