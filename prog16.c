#include<stdio.h>
int main()
{
    // if a five digit number is input through the keyboard, write a program to reverse the number.;

    int num,reversed = 0,digit;

    printf("Enter a five digit number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;   
        num = num / 10;
    }

     printf("Reversed number =%d", reversed);
     return 0;

}
