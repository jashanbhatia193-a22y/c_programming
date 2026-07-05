#include<stdio.h>
int main() 
{
    //temperature of a city in fahrenheit degrees is input through the keyboard, 
    //write a program to convert this temperature into centigrade degrees; c = 5(f - 32) / 9 

    float c,f,fahrenheitdegree;

    printf(" Enter temperature in fahrenheitdegree: ");
    scanf("%f", &fahrenheitdegree);

    c = 5*(f - 32) / 9;
    printf("c =%.2f", c);
    return 0;
}