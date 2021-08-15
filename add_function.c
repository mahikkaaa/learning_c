#include<stdio.h>
main()
{
	int add(int a, int b);
	int num1,num2,result;
	printf("enter first number : ");
	scanf("%d, &num1");
	printf("enter second number : ");
	scanf("%d, &num2");
	      result=add(num1,num2);
	      printf("addition is %d", result);
}
int add(int a, int b)
{
	int ans=a+b;
	return ans;
}


/**
MODIFICATION 

#include<stdio.h>
main()
{
	void add(int num1, int num2);
	int num1,num2,result;
	printf("enter first number : ");
	scanf("%d", &num1);
	printf("enter second number : ");
	scanf("%d", &num2);

	add(num1, num2);

}
void add(int n1, int n2)
{
	print("%d", n1+n2);
}