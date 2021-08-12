/*WAP to input marks in different subject , calculate total
and percentage till user's wish is 'y' */
#include<stdio.h>

main()
{
 float maths,english,computer,total, perc;
 int rollno;
 char wish='y';

 while(wish=='y')
 {
  system("cls");
  printf("\n\nenter Rollnumber  ");
  scanf("%d",&rollno);
  fflush(stdin);
  printf("enter marks for maths ");
 scanf("%f",&maths);
 fflush(stdin);
 printf("enter marks for English ");
 scanf("%f",&english);
 fflush(stdin);
 printf("enter marks for computer ");
 scanf("%f",&computer);
 fflush(stdin);
 total=maths+english+computer;
 perc=total/3;
    if(perc>=90 && perc<=100)
        printf("\n Outstanding");
    else if (perc>=80)
        printf("\n Excellent");
    else if (perc>=70)
        printf("\n Very Good");
    else if (perc>=60)
        printf("\n First class");
    else if (perc>=50)
        printf("\n Good");
    else
        printf("\ndo better");

    fflush(stdin);
     printf("\nDo you wish to continue for more students ?(y/n) ");
     scanf("%c",&wish);
     fflush(stdin);


 }
}