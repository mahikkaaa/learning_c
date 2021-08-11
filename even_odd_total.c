// program to check even or odd numbers
#include<stdio.h>
main()
{ int num,i,eventotal=0,oddtotal=0,choice;
printf("for how many numbers do you have to check?");
scanf("%d", &choice);

for(i=1;i<=choice;i++)
{

    printf("\nenter number %d ", i);
    scanf("%d",&num);

    if (num%2==0)
        eventotal=eventotal+num;
    else
        oddtotal=oddtotal+num;

}
printf("\n Total of Even number %d ",eventotal);
printf("\n Total of Odd number %d ",oddtotal);
}