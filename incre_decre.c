//understanding increment decrement operators
#include<stdio.h>
main()
{
    int num=10,a;
    a=++num;
    printf("\n a= %d",a);//11
    printf("\n num=%d",num);//11



    num=10;
    a=num++;
    printf("\n a= %d",a);//10
    printf("\n num=%d",num);//11


    num=10;
    a=num--;
    printf("\n a= %d",a);//10
    printf("\n num=%d",num);//9


}