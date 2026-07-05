#include<stdio.h>
int main()
{
    // write a program in c that take minutes as input, and display the total number of hours and mintues;

int minutes,hours;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

   hours= minutes/60;
    printf("hours and minutes =%.2d",hours);
    return 0;
}