#include<stdio.h>
int main()
{
    // the policy compzny followed by trend ....;

    int s,d,c,ok,not;

    printf("Enter the stock: ");
    scanf("%d",&s);
    printf("Enter the customer demand: ");
    scanf("%d", &d);
    printf("Enter credit(1 == ok , 2 == not ok) : ");
    scanf("%d", &c);
    

    if(s >= d  && c == 1 )
    {
        printf("supply has requirement: ");
    }
    else if(c == 2)
    {
        printf("intimation");
    }
    else if(c == 1  &&  d > s)
    {
        printf("supplly what is in stock: ");
    }
    return 0;
}