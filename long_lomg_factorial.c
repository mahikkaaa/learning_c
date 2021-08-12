#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long fact = 1;
	print("enter any non negative integer : ");
	scanf("%d", &n);
	if(n<0)
	    printf("error! factorial of a negative number doesn't exist.");
	else
	  {
	    for(i=1; i<=n; ++i)
	      {
	         fact*=i;
	      }
          printf("factorisl of %d = %llu", n, fact);
	  }
	  return 0;
}