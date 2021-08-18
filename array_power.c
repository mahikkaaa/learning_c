#include<stdio.h>
main()
{
  int ar[10];
  int i;
  //Accepting values in array
  for(i=0;i<10;i++)
  {
      printf("Enter array element number %d ",i+1);
      scanf("%d",&ar[i]);
  }
  //printing  values in array
  for(i=0;i<10;i++)
  {
      ar[i] = ar[i]*ar[i];
      printf("\narray element number ar[%d] is %d",i,ar[i]);
  }
}