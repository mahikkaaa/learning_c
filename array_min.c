#include<stdio.h>
main()
{
   int num[7]={23,56,12,67,90,8,34};

   int min=num[0],i;

   for(i=0;i<=6;i++)
   { printf("\n%d",num[i]);

      if(num[i]<min)
            min=num[i];
   }

   printf("\nThe smallest element in array %d\n\n",min);

}




/**
MODIFICATION
#include<stdio.h>
#include<string.h>
main()
{ int ar[7],i;
  int min,posmin=0,max,posmax=0;

 //to accept values in array
 for(i=0;i<7;i++)
 {
     printf("Enter value for array element number %d ",i+1);
     scanf("%d",&ar[i]);
 }
 //initialize min and max with first element
 min=ar[0];
 max=ar[0];
 for (i=0;i<7;i++)
 {
     if(ar[i]<min)
        {
           min=ar[i];
           posmin=i;
        }
     else if (ar[i]>max)
        {max=ar[i];
         posmax=i;
         }
 }
 printf("\n the maximum number is %d found in position %d",max,posmax+1);
 printf("\n the minimum number is %d  found in position %d",min,posmin+1);
}






//Program to find minimum number in array
#include<stdio.h>
main()
{
    int ar[10],i,min;
    //Accept array elements
    for(i=0;i<10;i++)
    {
        printf("Enter element ");
        scanf("%d",&ar[i]);
    }

    min=ar[0];
    for (i=0;i<10;i++)
    { printf("\n %d",ar[i]);
        if (ar[i]<min)
            min=ar[i];

    }
    printf("\n Minimum value is %d ",min);
}
**/
