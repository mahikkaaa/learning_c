#include<stdio.h>
main()
{ //program to check  prime number
    int num;
    char ans;
    char chkprime(int n);
    printf("enter any number ");
    scanf("%d",&num);

    ans=chkprime(num);
    //printf("%c",ans);
    if(ans=='y')
        puts("This is prime number");
    else
        puts("This is not prime number");
}
 char chkprime(int n)
 { int i;
    char flag='y';

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag='n';
            break;
        }
    }
     return flag;
 }

