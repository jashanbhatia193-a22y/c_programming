#include<stdio.h>
#include<stdlib.h>
int balance = 500;
void deposit(int deposit)
{
    balance = balance + deposit;
    printf("upgraded balance =%d", balance);
}
void withdraw()
{
    int withdraw;
    printf("Enther the amount of withdraw: ");
    scanf("%d", &withdraw);

    if(balance < withdraw)
    {
        printf("Insuifficiant balance: ");
    }
    else
    { 
        balance = balance - withdraw; 
        printf("Upgraded balance =%d", balance);
    }
}
int main()
{
   int choice,Invalid;
   do{ 
    printf("Enter the choice(1=deposit,2=withdraw,3=exit) ");
    scanf("%d", &choice);

    switch(choice)
    {

        case 1: 
        {
            int dep;
            printf("Enter the deposit amount: ");
            scanf("%d", &dep);
            deposit(deposit);
            break;
        }

        case 2: withdraw();
        break;
        case 3: exit(0);
        break;
        default:
        printf("Invalid");
    }
} while(choice != 4);
    return 0;
}

