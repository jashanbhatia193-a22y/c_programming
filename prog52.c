#include<stdio.h>
int main()
{
    // input any number and add 1 to its digit;

    int i,digit,n;

   printf(" Enter five-digit number: ");
    scanf("%d", &n);
      
    for(i = 1; i <=5; i++)
    {
      //digit = n % 10;
      digit = digit +1;
      printf("%d", digit);
      n = n /10;
    }
    return 0;
}