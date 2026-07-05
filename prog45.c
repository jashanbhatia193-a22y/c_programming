#include<stdio.h>
#include<math.h>

int main()
{
    int n,r,sum = 0,count = 0,t;

    printf("enter the five-digit number: ");
    scanf("%d", &n);

    t = n;

    while(n>0)
    {
        count++;
        n=n/10;
    }

    n = t;


    while(n > 0)
    {
        r = n%10;
        sum=sum + pow(r,count);
        n=n/10;
    }
    printf("%d", sum);

    if(sum == t)
    
        printf("yes armsrtrong number: ");
    
    else 
    
        printf("Invalid: ");
    
    return 0;
}