#include<stdio.h>
main()
{
   int maxi(int a,int b);
   int product (int p, int q);
   int num1,num2,ans,pr;
   printf("enter first number ");
   scanf("%d",&num1);
   printf("enter second number ");
   scanf("%d",&num2);

   ans=maxi(num1,num2);//calling
   pr=product(num1,num2);
   printf("\n greater number is %d",ans);
   printf("\n Product of  number is %d",pr);
}
int maxi(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;

}
int product (int p, int q)
{
    return (p*q);
}




/**
MODIFICATION 

#include<stdio.h>
main()
{void maxmin();
    printf("Lets Begin \n");
 maxmin();
}
void maxmin()
{
    int i,num[20],length=0,max,min;
    for(i=0;num[i-1]!=0;i++)
   {
        printf("Enter the %d no.",i+1);
        scanf("%d",&num[i]);
        length++;
   }
   printf("\n size of array %d",length);
    max=num[0];
    for(i=0;i<length-1;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    printf("\nMaximum number is %d",max);
    min=num[0];
    for(i=0;i<length-1;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    printf("\nMinimum number is %d\n\n",min);
}









//How to pass an array to a function
main()
{
    int ar[5],i;
    void prarray(int a[],int s);//declaration
    void maxmin(int arr[],int si);
    //accept values into array
    for(i=0;i<5;i++)
    {
        printf("enter element ");
        scanf("%d",&ar[i]);
    }

    prarray(ar,5);//calling
    maxmin(ar,5);

}
//definition of function
void prarray(int a[],int s)
{ int j;
    for (j=0;j<s;j++)
    {
        printf("\n %d",a[j]);
    }
}

void maxmin(int arr[],int si)
{
    int max,min,i;
    max=min=arr[0];

    for (i=0;i<si;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        else if (arr[i]<min)
            min=arr[i];
    }
    printf("\n\nThe largest element %d ",max);
    printf("\nThe smallest element %d ",min);
}






**/