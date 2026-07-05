#include<stdio.h>
int main()
{
    int a[4] = {3,2,2,5},temp[4],element,unique=0,i,j,count;

    printf(" unique elemts are: \n");
    for(i =0; i < 4; i++)
    {
        unique = 0;
        for(j = 0; j <4; j++)
        { 
            if(a[i] == a[j])
            { 
                unique++;
            }
        }
        if(unique==1)
        {
            printf("%d ", a[i]);
        }
    }
        return 0;
}