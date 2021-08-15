
//Application of bank using function
#include<stdio.h>
main()
{
    int accno,Balance,w_amt,d_amt;
    char name[20];
    int Deposite(int Bal);
    int Withdraw(int Bal);

    printf("Enter Account number ");
    scanf("%d", &accno);
    fflush(stdin);
    printf("Account holder's name ");
    gets(name);
    fflush(stdin);
    printf("Enter balance amount ");
    scanf("%d",&Balance);
    fflush(stdin);


    Balance=Deposite(Balance);

    printf("\nAfter Deposit, Balance is %d ",Balance);
    Balance=Withdraw(Balance);
    printf("\nAfter withdrawal, Balance is %d ",Balance);
}

    int Deposite(int Bal) 
    {  
         int d_amt,b;
         printf("Enter Deposit Amount ");
         scanf("%d",&d_amt);
         b=Bal+d_amt;
         return b;
    }

    int Withdraw(int Bal)
    {    int w_amt,b=Bal;
         printf("\n\nEnter Withdraw Amount ");
         scanf("%d",&w_amt);
         if(w_amt>Bal)
             printf("no sufficient amount ,Can not process transaction");
         else
             b=Bal-w_amt;
         return b;
    }