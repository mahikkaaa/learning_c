 /**
 1
 2  2
 3  3  3
 4  4  4  4
 5  5  5  5  5
 **/

#include<stdio.h>
main()
{
   int i,j;
   for (i=1;i<=5;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf(" %d ",i);
       }
       printf("\n");
   }
}

/**
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 **/

#include<stdio.h>
main()
{
   int i,j;
   for (i=1;i<=5;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf(" * ");
       }
       printf("\n");
   }
}

/**
1       10
2       9
3       8
4       7
5       6
6       5
7       4
8       3
9       2
10      1
**/

#include<stdio.h>
main()
{
    int i,j;
    for(i=1,j=10;i<=10 && j>=1; i++,j--)
    {
        printf("\n%d\t%d",i,j);
    }
}

/**
 1
 1  2
 1  2  3
 1  2  3  4
 1  2  3  4  5
 **/

#include<stdio.h>
main()
{
   int i,j;
   for (i=1;i<=5;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf(" %d ",j);
       }
       printf("\n");
   }
}


/**
 1
 2  2
 3  3  3
 4  4  4  4
 5  5  5  5  5
 **/

#include<stdio.h>
main()
{
   int i,j;
   for (i=1;i<=5;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf(" %d ",i);
       }
       printf("\n");
   }
}

