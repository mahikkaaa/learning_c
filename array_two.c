#include<stdio.h>
main()
{   int i,j;
    int marks[4][3];
    int total=0;

   printf("\nAccepting values from user ");
  for(i=0;i<4;i++)//for rows
{ // printf("\n enter marks for student number %d ",i+1);
    for(j=0;j<3;j++)//for columns
    {printf("\n enter marks for subject number [%d][%d]",i+1,j+1);
        scanf("%d",&marks[i][j]);
    }
}

 //Printing array
for(i=0;i<4;i++)//for rows
{
    for(j=0;j<3;j++)//for columns
    {
        printf("%3d",marks[i][j]);
        total=total+marks[i][j];
    }
    printf("%3d",total);
    total=0;
    printf("\n");
}

}