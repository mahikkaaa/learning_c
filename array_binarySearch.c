#include<stdio.h>
#define size 5 //macro
main()
{ //Binary search

   int ar[size]={23,34,56,78,90};/// array should be ascending or descending order
   int pos,search_num=78;

   int low,high,mid;

   char flag='n';

   low=0;
   high=size-1;

   while(low<=high)
   {
       mid=(low+high)/2;
       if(search_num==ar[mid])
       {
           flag ='y';
           pos=mid+1;
           break;
       }
       else if(search_num>ar[mid])
       {
           low=mid+1;

       }
       else if(search_num<ar[mid])
       {
           high=mid-1;
       }
   }

   if(flag=='y')
    printf("number found at position %d",pos);
   else
    printf("\n Number not found ");
   }
