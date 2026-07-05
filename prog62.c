#include<stdio.h>
int main()
{
    int marks[100],i,n,sum=0,avg;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }
    for(i = 0; i<n; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / n;
    printf("avg : %d", avg);
    return 0;
}