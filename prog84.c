#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int r = rand();
    printf("%d", r);
    return 0;
}