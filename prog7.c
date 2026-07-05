#include<stdio.h>
int main()
{
//write a c program that takes hours and minutes as input, and calculates the total number of hours and minutes;

int hours,minutes,calculate;

printf("Enter hours: ");
scanf("%d", &hours);
printf("Enter minutes: ");
scanf("%d", &minutes);

minutes= (hours*60+minutes);
printf("total number= %d",minutes);
return 0;

}