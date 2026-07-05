#include<stdio.h>
int main()
{
    //Ramesh's  basic salary is input through the keyboard. His dearness allowvance is 40% of basic salary, and house rent allowance 
    //is 20% of basic salary. write a program to convert to calculate his gross salary;

    float Gross,Basic,da,hra;

    printf("Enter the amount of Basic: ");
    scanf("%f", &Basic);
    Gross = Basic  + da + hra;
    Gross = Basic  + (0.40*Basic) + (0.20*Basic );

    printf("Gross =%.2f", Gross);
return 0; 

}