#include<stdio.h>
// Area of circle using function;

float area(float r)
{
   return 3.14 * r * r;
}
int main()
{
    float radius, result;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    result = area(radius); // function call;

    printf("Area of circle = %.2f", result);

    return 0;
}