#include<stdio.h>
int main()
{
    // A library charge a fine ,  make a list.;

    int days,num;
    float fine;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    // late days count and fine will be punished;

    if(days == 5 )
    {
        printf("fine 50 paise");
    }
    else if(days > 5  &&  days <=10)
    {
        printf("fine is 1 rupee");
    }
    else if(days > 10  &&  days <=30)
    {
        printf("fine is 5 rupees");
    }
    else if(days >30 )
    {
        printf("membership will be cancelled");
    }
    return 0;
    
    
}