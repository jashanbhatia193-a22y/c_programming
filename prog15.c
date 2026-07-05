#include<stdio.h>
int main()
{
   // if a five digit number is input through the keyboard, write a 
   // program to calculate the sum of its digits.; ( us ethe modulus operator);

   int num, sum = 0;

   printf("Enter a five digit a number: ");
   scanf("%d", &num);

   while(num !=0) {
    sum = sum +(num % 10);
    num = num / 10;
   }
   printf("sum of digits = %d", sum);
   return 0;
}