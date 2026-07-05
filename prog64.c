#include<stdio.h>
int main()
{
    int a[6]= {365,121,321,567,893,1954},sum=0,temp[6],n,i,r;

    for(i =0; i < 6; i++)
    {
        sum = 0;
        n = a[i];
        while(n>0)
        {
            r = n % 10;
            sum = sum + r;
            n = n / 10;
        }
        temp[i] = sum;
    }
    for(i = 0; i < 6; i++)
    {
        printf("%d\n", temp[i]);
    }

    return 0;
    
}