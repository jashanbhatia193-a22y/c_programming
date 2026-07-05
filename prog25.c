#include<stdio.h>
int main()
{
    // input five number and find out largest one.;

    int a,b,c,d,e, big=0;

    printf("Enter numbers: ");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    
        big=a;
    
    if(b>big)
    {
        big=b;
    }
    if(c>big)
    {
        big=c;
    }
    if(d>big)
    {
        big=d;
    }
    if(e>big)
    {
        big=e;
    }
    printf("biggest number =%d", big);
    return 0;
}