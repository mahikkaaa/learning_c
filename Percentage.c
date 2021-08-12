#include<stdio.h>
main()
{
 float maths,english,computer,total, perc;
 int rollno,i;
 for(i=1;i<=3;i++)
  {
    printf("\n\nenter Rollnumber  ");
    scanf("%d",&rollno);
    printf("enter marks for maths ");
    scanf("%f",&maths);
    printf("enter marks for English ");
    scanf("%f",&english);
    printf("enter marks for computer ");
    scanf("%f",&computer);
    total=maths+english+computer;
    perc=total/3;
    if(perc>=90)
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

  }
}