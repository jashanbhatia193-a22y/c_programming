#include<stdio.h>
int main ()
{
    //if cost price and selling price of an item is input through the keyboard, write a program to determine whether
    // the seller has made profit or incurred loss. also determine how much profit he made or loss he incurred.;

int cp,sp,total;

    printf("cp of an item: ");
    scanf("%d", &cp);

    printf("sp of an item: ");
    scanf("%d", &sp);

    total = sp - cp;

    if(sp>cp)
    {
        printf("profit");
    }
    else if(cp>sp)
    {
        printf("loss");
    }
    printf("total =%d", total);
    return 0;



}