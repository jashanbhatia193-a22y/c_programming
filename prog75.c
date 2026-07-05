#include<stdio.h>
int main()
{
    int a[3] ={45,25,21},i,temp[3],max = a[0],min = a[0];

    for(i =0; i < 3; i++)
    {
        temp[i] = a[i];
    }
    for(i = 0; i < 3; i++)
    {
        printf("%d\n", temp[i]);
    }
     for(i =1; i < 3; i++)
    { 
    if(a[i] > max)
    {
        max = a[i];
    }
    if(a[i] < min)
    {
        min = a[i];
    }
}
     
printf("Maximun elemnt is:%d\n", max);
printf("Mipnimum elemnt is:%d\n", min);

return 0;
 }
