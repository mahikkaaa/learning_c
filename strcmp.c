#include<string.h>
#include<stdio.h>
main()
{
    char str1[10]="Anupa";
    char str2[10]="anupa";
    int ans;

    ans=strcmp(str1,str2);
    printf("\nans is %d",ans);

    if (ans==0)
        printf("\n Both strings are same\n\n ");
    else if(ans>0)
        printf("\n first string greater than second string\n\n");
    else
        printf("\n second string greater than first string\n\n");
}