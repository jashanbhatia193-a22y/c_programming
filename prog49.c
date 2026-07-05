#include<stdio.h>
int main()
{
    //  int n,first,last,except,t,sum,digit, mid=0, r;

    // printf("Enter the number: ");
    // scanf("%d", &n);
    // t=n;

    // last = n %10;

    // while(n>9)
    // {
    //     n=n/10;
    // }
    // first = n;
    
    // sum = first + last;

    // printf("%d\n", sum);

    // t=t/10;
    
    // while(t>9)
    // {
    //     r=t%10;
    //     mid=mid+r;
    //     t=t/10;
    // }

    // printf("%d\n", mid);

    int n,first,last,except,t,sum,digit, mid=0, r;

    printf("Enter the number: ");
    scanf("%d", &n);
    last = n %10;
    n=n/10;

    while(n>9)
    {
        r=n%10;
        mid=mid+r;
        n=n/10;
    }
    
    sum = n + last;

    printf("%d\n", sum);
    printf("%d\n", mid);
    

    return 0;
}