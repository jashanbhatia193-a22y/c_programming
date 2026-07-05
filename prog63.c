#include<stdio.h>
int main()
{
    int a[7] ={5,7,11,20,25,3,4},elements,i,sum = 0;

       for(i = 0; i < 7; i++)
     {    
        if( a[i] % 2 != 0)
        {
           sum = sum + a[i];
        }
    }
    printf("sum =%d", sum);
    return 0;

}