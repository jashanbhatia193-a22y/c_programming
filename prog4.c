#include<stdio.h>
int main()
{
    float base, height, area;

    printf("Enter base: ");
    scanf("%F", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Area of Triangle = %.2f", area);
    return 0;

}