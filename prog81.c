#include<stdio.h>
// cal. the simple interest;

float si(float p, float r, float t)
{
    return p * r * t / 100;
}
int main()
{
    float p,r,t,result;

    printf("Enter the Principale: ");
    scanf("%f", &p);
    printf("Enter the rate: ");
    scanf("%f", &r);
    printf("Enter the time: ");
    scanf("%f", &t);

    result = si(p,r,t); // function call;

    printf("Cal. the simple interest = %.2f", result);

    return 0;
}