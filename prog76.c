#include<stdio.h>
int main()
{
    int a[5] ={25,47,42,56,32},i,temp[5],odd[5],even[5],o = 0,e = 0;

    for(i =0; i < 5; i++)
    {
        temp[i] = a[i];
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", temp[i]);
    }
    for(i = 0; i < 5; i++)
    { 
    {
        if(a[i] % 2 == 0)
         even[e] = a[i];
         e++;
    } 
    if(a[i] % 2 != 0)
     { 
     odd[o] = a[i];
     o++;
    }
}
    for(i = 0; i < e; i++)
    {
        printf("even number are=%d\n", even[i]);
    }
    for(i = 0; i < o; i++)
    {
        printf("odd number are=%d\n", odd[i]);
    }
    return 0;
}