//linear search using function
#include<stdio.h>
main()
{
	void Lsearch(int ar[], int s, int searchnum);

	int ar[50];
	int size, i;
	int search_num;

	printf("enter the size of array <=50");
	scanf("%d", &size);

	for(i=0; i<size; i++)
	{
	printf("enter array element number [%d] : ", i+1);
	scanf("%d", &ar[i]);
	}

	printf("\n enter element to search ");
	scanf("%d", &search_num);

	Lsearch(ar, size, search_num);
}

void Lsearch(int ar[], int s, int searchnum);
{
	char found='n';
	int i, pos;

	for(i=0; i<s, i++)
	{
	   if(searchnum==ar[i])
	   {
	   found='y';
	   pos=i;
	       break;
	   }
	}
	if(found=='n')
	     printf("\n num not found");
	else
	     printf("\n number found at position %d", pos+1);
}