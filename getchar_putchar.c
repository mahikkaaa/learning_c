//program to understand getchar and putchar
#include<stdio.h>
main()
{
	char grade;
	printf("enter grade : ");
	grade = getchar();
	putchar(grade);
	printf("you are in grade %c", grade);
	
}