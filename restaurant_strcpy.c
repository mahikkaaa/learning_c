#include<stdio.h>
#include<string.h>
/* WAP to enter food code,food name and food type and depending upon food type
  assign the sticker */
main()
{
    char foodtype[20];
    int foodcode;
    char sticker[50];
    char foodname[20];

    printf("enter foodcode ");
    scanf("%d",&foodcode);
    fflush(stdin);
    printf("enter food name ");
    gets(foodname);
    fflush(stdin);
    printf("enter food  type ");
    gets(foodtype);
    fflush(stdin);

    if(strcmp(foodtype,"Vegetarian")==0)
        strcpy(sticker,"GREEN");
    else if (strcmp(foodtype,"Contains Egg")==0)
        strcpy(sticker,"YELLOW");
    else if (strcmp(foodtype,"Non Vegetarian")==0)
        strcpy(sticker,"RED");
    else
        strcpy(sticker,"Food type does not exists");

      printf("\n\n Food code %d ",foodcode);
      printf("\n\n Food name %s ",foodname);
      printf("\n\n Food type %s ",foodtype);
      printf("\n\n Food Sticker %s \n ",sticker);
}