#include<stdio.h>
//Declare an array of size 10 ,accept values from user
 //and print it print sum of array element also
main()
{
  int ar[10],sum=0;
  int i;
  //Accepting values in array
  for(i=0;i<10;i++)
  {
     printf("Enter array element [%d] ",i);
     scanf("%d",&ar[i]);
  }
 // system("CLS");
  //printing  values in array
  for(i=0;i<=9;i++)
  {
      printf("\narray element number ar[%d] is %d",i,ar[i]);
      sum=sum+ar[i];
  }
  printf("\n\nSum of array elements is %d\n",sum);

//Printing array in reverse order
  for(i=9;i>=0;i--)
    printf("\n%d",ar[i]);

}



