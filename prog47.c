#include<stdio.h>
int main()
{
    int n,sum = 0,t,digit,k;

    printf("Enter the number: ");
    scanf("%d", &n);

    t = n;
     t=t/10;
    

    while(t >10)
    {
        digit = t % 10;
        sum = sum + digit;
        t = t /10;
    }

    
    printf("Sum(except first  & last digit) = %d", sum);
    return 0;
}