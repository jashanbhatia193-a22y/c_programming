#include<stdio.h>
int main()
{
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    if(n % 2)
    {
        printf("yes it is prime number: ");
    }
    else 
    {
        printf("not prime number: ");
    }
    return 0;
}