#include<stdio.h>
int main()
{
    int a[3] = {2,5,7},i,n =3;
    int temp;

     for(i =0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n -1 -i];
        a[n -1 -i] = temp;
    }
       
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;

}