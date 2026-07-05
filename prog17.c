#include<stdio.h>
int main() 
{
    //if a four digit number is input through the keyboard, write a program to obtain the sum of its 
    // first and ;last digits of this number;

    int sum,firstdigit,lastdigit,num,n;

    printf("Enter four digit number; ");
    scanf("%d", &num);

    firstdigit = n / 1000;
    lastdigit = n % 10;
    sum = (firstdigit + lastdigit);

    printf("sum =%d", sum);
}