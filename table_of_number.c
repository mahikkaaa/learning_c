// program to create table
#include<stdio.h>
main()
{
    int num,i;

        printf("\nenter any number ");
        scanf("%d",&num);

        for (i=1;i<=10;i++)
        {
          //printf("\n%d * %d = %d",num,i,num*i);
         printf("\n%d",num*i);
       }
puts("\nwhile loop");
       i=1;
       while(i<=10)
       {
          printf("\n%d",num*i);
          i++;
       }
puts("\n do while loop");
i=1;
do
{
    printf("\n%d",num*i);
          i++;
}while(i<=10);

}