#include<stdio.h>
int main()
{
    // Any year is entered through the keyboard, write a program to determine whether the year is leap or not.
    // use the logical operators && and || . 

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if(year % 400 && year / 4)
    {
        printf("leap year: ");
    }
    else 
    {
        printf("not leap year: ");
    }
    return 0;
}
