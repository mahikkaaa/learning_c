//Array sorting in Ascending order
#include<stdio.h>
main()
{
   int ar[5]={23,45,12,6,9};
   int i,j,temp;
   //Sorting array
   for(i=0;i<5;i++)
   {
       for (j=i+1;j<5;j++)
       {
           if(ar[i]<ar[j])// to sort in descending change the sign to <
           {
               temp=ar[i];
               ar[i]=ar[j];
               ar[j]=temp;
           }

       }
   }

   printf("Showing sorted array...");
   for(i=0;i<5;i++)
   {
       printf("\n%d",ar[i]);

   }
}