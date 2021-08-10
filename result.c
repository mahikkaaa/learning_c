#include<stdio.h>
main()
{
  int rollno;
  char name[10];
  float sci,eng,mat,total,perc;

  printf("Enter Roll number ");
  scanf("%d",&rollno);
  printf("Enter Name ");
  scanf("%s",name);
  printf("Enter Maths marks ");
  scanf("%f",&mat);
  printf("Enter science marks ");
  scanf("%f",&sci);
  printf("Enter english marks ");
  scanf("%f",&eng);


  total=mat+eng+sci;

  perc=total/3;

  printf("\n\t\t\tResult");
  printf("\n\t---------------------------");
  printf("\n\tName :%s ",name);
  printf("\n\tRoll number :%d ",rollno);
  printf("\n\tScience Marks  :%f ",sci);
  printf("\n\tMaths Marks  :%f ",mat);
  printf("\n\tEnglish Marks  :%f ",eng);
  printf("\n\tTotal Marks  :%f ",total);
  printf("\n\tPercentage scored  :%f ",perc);
  printf("\n\t---------------------------");


}