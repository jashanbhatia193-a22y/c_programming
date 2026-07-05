#include<stdio.h>
int main()
{
    int A,B;

    printf("Enter marks in subject A: ");
    scanf("%d", &A);
    printf("Enter marks in subject B: ");
    scanf("%d", &B);

    if( (A >= 55 && B >= 45) || (A >= 45 && B >= 55) )
    {
        printf("pass\n");
    }
    else if(A >= 65  &&  B < 45)
    {
        printf("Re-apperance in B\n");
    }
    else{
        printf("Fail\n");
    }
    return 0;
}