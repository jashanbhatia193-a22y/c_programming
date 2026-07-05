#include<stdio.h>
int main()
{
    int n,r,sum = 0,original;

    printf("enter the number: ");
    scanf("%d", &n);

    n = original;

    while(n > 0)
    {
        r = n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("%d", sum);

    if(original == sum)
    {
        printf("yes it is palidrome number: ");
    }
    else
    {
        printf("not palidrome");
    }
    return 0;
}