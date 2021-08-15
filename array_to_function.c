#include<stdio.h>
main()
{
	int ar1[5]={10,20,30,40,50};
	int ar2[6]={11,12,13,14,15,16};
	int ar3[3]={1,2,3};

	void printarray(int ar[], int s);

	printarray(ar1,5);
	printarray(ar2,6);
	printarray(ar3,3);

}
void printarray(int ar[], int s)
{
	int i;
	for(i=0; i<s; i++)
	{
	    printf("%d", ar[i]);
	}
	printf("\n")
}