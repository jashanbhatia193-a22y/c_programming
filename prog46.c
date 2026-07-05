#include<stdio.h>
int main()
{
    int sum=0,n,r,t,reverse = 0,l, orignal;

    printf("input any number: ");
    scanf("%d", &n);

    orignal = n;

    while(n > 0)
    {
        r = n%10;
        sum=sum + r;
        n=n/10;
    }
    printf(" sum of digits =%d\n", sum);
    
    t = sum;

    while(t > 0)
    {
        r = t%10;
        reverse=reverse*10+r;
        t=t/10;
    }
    printf("%d\n", reverse);

    l=sum*reverse;

    
    printf("%d\n", l);
    if(l==orignal)
    {
        printf("it is a magic number: ");
    }
    else
    
        printf("Invalid");
    
      return 0;
}