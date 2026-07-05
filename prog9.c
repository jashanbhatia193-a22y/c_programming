#include<stdio.h>
int main()
{
    // write a c program to find the third angle of a triangle if two angles are given;

    int A,B,C,Angle;

// where A= angle 1, B= angle 2, C= angle 3;

printf("Enter A: ");
scanf("%d", &A);
printf("Enter B: ");
scanf("%d", &B);

C = 180 - (A + B);
printf("Angle 3 =%d",C);
return 0;
}