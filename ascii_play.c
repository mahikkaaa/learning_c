#include<stdio.h>
main()
{
	char ch;
	printf("\n\nenter a character of your choice except !");
	scanf("%c", &ch);
	fflush(stdin);
	while(ch!='!'')
	{
	  ch=ch-32;
	  printf("\n character you entered is converted to %c", ch);
	}
}