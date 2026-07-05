#include<stdio.h>
int main()
{
    int i,j;

    for( i=1; i <= 10; i ++)
    {
        for( j=1; j <= 10; j ++)
     { 
    if(i % 2)
    {
        printf("+");
    }
    else if(j % 2)
    {
        printf("*");
    }
  }
  printf("\n");
    } 
    return 0;
}