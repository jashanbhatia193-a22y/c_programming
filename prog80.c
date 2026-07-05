#include<stdio.h>
// Area of triangle using function;

float area(float base, float height)
{
   return base * height / 2;
}
int main()
{
    float b,h,result;

    printf("Enter the base: ");
    scanf("%f", &b);
    printf("Enter the height: ");
    scanf("%f", &h);
    
    result = area(b, h); // function call;

    printf("Area of triangle = %.2f", result);

    return 0;
}