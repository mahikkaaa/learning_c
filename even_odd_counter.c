#include<stdio.h>
//program to check number even or odd.
main()
{
    int num,i,evencounter=0,oddcounter=0, choice;
    printf("how many numbers do you want to check?");
    gets(choice);

  for(i=1;i<=choice;i++)
  {
    printf("\n enter %d number ",i);
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("number is Even");
        evencounter++;
    }
    else
    {
        printf("number is odd");
        oddcounter++;
    }
  }

  printf("\nCount of even numbers %d",evencounter);
  printf("\nCount of odd numbers %d\n\n",oddcounter);

}