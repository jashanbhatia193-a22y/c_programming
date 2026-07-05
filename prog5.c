#include<stdio.h>
int main()
{
  float radius, Volume;

printf("Enter radius: ");
scanf("%f", &radius);

Volume = (4 * 3.14 * radius * radius * radius) / 3;

printf("volume of sphere = %.2f", Volume);
return 0;
}