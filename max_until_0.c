#include<stdio.h>
main()
{
	int num,i=1,max;
	printf("enter any number : ");
	scanf("%d", &num);
	max=num;
	while(num!=0)
	  {
	    if(num>max)
	        max=num;
	    else if(num==0)
	        break;

	      printf("enter any number : ");
	      scanf("%d", &num);

      }
      printf("maximum number is %d", max)
}