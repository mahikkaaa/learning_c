
 //Program for linear search

#include<stdio.h>
main()
{
  //  int ar[50];
    int s,i;
    char found='n';
    int pos=0,search_num;
    printf("Enter size for array <=50 ");
    scanf("%d",&s);
     if(s>=50)
     {
       puts("Array size is very large ");
       exit(0);
     }
    int ar[s];

    //accepting numbers from user
     for(i=0;i<s;i++)
     {
      printf("Enter array element number [%d] ",i);
      scanf("%d",&ar[i]);
     }

     printf("\n Enter  Element to be search ");
     scanf("%d",&search_num);

     //printing  values in array and searching
     for(i=0;i<s;i++)
    {
        if(search_num==ar[i])
        {
            found='y';
            pos=i;
            break;
        }
    }

    if(found=='n')
        printf("\n Number not found");
    else
        printf("\n Number found at position %d",pos+1);
}




/** 
MODIFICATION
//linear search
#include<stdio.h>
main()
{
    int i,snumber,pos,siz;
    char found='n';
    printf("What is the size of array ");
    scanf("%d",&siz);
    int ar[siz];
    //To input elements for an array
    for (i=0;i<siz;i++)
    {
        printf("enter element ");
        scanf("%d",&ar[i]);
    }
   printf("enter element to search ");
   scanf("%d",&snumber);
   //searching
   for(i=0;i<siz;i++)
   {
       if(snumber==ar[i])
       {
           pos=i;
           found='y';
           break;
       }
   }
   if(found=='y')
    printf("Number found at location %d",pos+1);
   else
    printf("Number not found");

}

**/