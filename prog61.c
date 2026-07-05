#include<stdio.h>
int main()
{
    // krishna murti number;

    int num,original,i,r,a,sum=0;

    printf("enter the number: ");
    scanf("%d", &num);
    
    original = num;

    while(num > 0)
    {
        r = num % 10;
         a = 1;
    
        for(i =1; i <=r; i++)
        {
           a = a * i;
        }
        sum = sum + a;
        num = num / 10;
    }
     if(sum == original)
     printf("krishnamurti number: ");
     else 
     printf("not a krishna murti number: ");

     return 0;
    }
    
