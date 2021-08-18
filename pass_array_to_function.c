//passing array to function
#include<stdio.h>
main()
{
    void display_array(int ar[10]);
    int ar[10];

    int i;

    for(i=0;i<10;i++)
    {
        printf("enter element [%d] ",i+1);
        scanf("%d",&ar[i]);
    }

    display_array(ar);  //while calling just write name of array
    //Array are passed by default call by reference
   for(i=0;i<10;i++)
    {
        printf("\n%d",ar[i]);
    }
}

void display_array(int arr[])
{
    int k;
    for(k=0;k<10;k++)
    {    arr[k]=arr[k]+1;
        printf("\n%d",arr[k]);
    }
}