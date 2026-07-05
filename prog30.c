#include<stdio.h>
int main()
{
    //any year is input through the keyboard. write a program to determine
    // whether the year is a leap year or not.; 

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if(year % 400)
    {
        printf("leap year: ");
    }
    else 
    {
        printf("not leap year: ");
    }
    return 0;
}