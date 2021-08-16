//TO UNDERSTAND STRING compareFUNCTIONS
#include<stdio.h>
#include<string.h>
main()
{
    char user1[10]="Anupa";
    char password1[10]="anupa123";

    char user[10];
    char password[10];
    int ans;

    printf("Enter username ");
    scanf("%s",user);
    printf("Enter password ");
    scanf("%s",password);
    if(strcmp(user,user1)==0 && strcmp(password,password1)==0)

      printf("correct, go ahead");
    else
        printf("invalid user");

}