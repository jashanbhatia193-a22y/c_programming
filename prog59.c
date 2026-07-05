#include<stdio.h>
int main()
{
    int i,j,s= 1;

    for(i = 1; i <=4; i++)
    {
        for(j = i; j <= s; j++)
        {
            
            printf("*");
             s = s + 1;
        }
        printf("\n");
       
    }
    return 0;

}