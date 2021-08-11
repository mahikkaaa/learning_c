/*According to the Gregorian calendar,
it was Monday on 01/01/01.
C program to find out what is the day on 1st January of the input year.*/
#include<stdio.h>
void main()
{
    int yr, ref_yr=2001, diff, lpyr, nmyr, td, day;

    /** Variable Explanation:-
    yr= requested year input
    ref_yr= reference year
    diff= difference b/w ref_yr & yr
    lpyr= leap years b/w ref_yr & yr
    nmyr= normal years b/w ref_yr & yr
    td= total no. of days b/w ref_yr & yr
    day= stores the day of the week
    **/

    printf("Enter a year : ");
    scanf("%d", &yr);

    diff=yr-ref_yr;

    lpyr=diff/4;

    nmyr=diff-lpyr;

    td=((nmyr*365)+(lpyr*366));

    day=td%7;

    if (day==0)
        printf("\nMonday\n");
    else if (day==1)
        printf("\nTuesday\n");
    else if (day==2)
        printf("\nWednesday\n");
    else if (day==3)
        printf("\nThursday\n");
    else if (day==4)
        printf("\nFriday\n");
    else if (day==5)
        printf("\nSaturday\n");
    else if (day==6)
        printf("\nSunday\n");

}
 
//MODIFICATION

/**
#include<stdio.h>

#include<conio.h>

void main()

{

int year,a,i,day;

printf(“\nEnter a year :”);

scanf(“%d”,&year”);

a=year-1;

i=a÷4;

day=(a+i)%7;

if(day==0)

printf(“\nIt is Monday”);

if(day==1)

printf(“\nIt is Tuesday”);

if(day==2)

printf(“\nIt is Wednesday”);

if(day==3)

printf(“\nIt is Thursday”);

if(day==4)

printf(“\nIt is Friday”);

if(day==5)

printf(“\nIt is Saturday”);

if(day==6)

printf(“\nIt is Sunday”);

else

printf(“\nError”);

getch();

}
**/


//MODIFICATION

/**
#include<stdio.h>
#include<conio.h>
int main()
{
    int year,a, day = 0;

    printf("Enter a year : ");
    scanf("%d", &year);

    //Counting total number of days
    for(a = 1; a < year; a++)
    {
        if(a % 4 == 0)//366 days if a leap year
            day = day + 366;
        else
            day = day + 365;
    }

    day = day % 7;

    if(day == 1)
        printf("It'll be monday on 01/01/%d", yer);
    if(day == 2)
        printf("It'll be tuesday on 01/01/%d", yer);
    if(day == 3)
        printf("It'll be wednesday on 01/01/%d", yer);
    if(day == 4)
        printf("It'll be thursday on 01/01/%d", yer);
    if(day == 5)
        printf("It'll be friday on 01/01/%d", yer);
    if(day == 6)
        printf("It'll be saturday on 01/01/%d", yer);
    if(day == 0)
        printf("It'll be sunday on 01/01/%d", yer);

    getch();
    return 0;
}


**/