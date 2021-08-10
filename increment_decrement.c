#include<stdio.h>
//understanding increment decrement operators
main()
{
    int num=10;
    num++;
    printf("\n num is now %d",num); //11
    ++num;
    printf("\n num is now %d\n",num); //12

    num--;  //num=num-1
    printf("\n num is now %d",num); //11
    --num;  //num=num-1
    printf("\n num is now %d",num); //10
}