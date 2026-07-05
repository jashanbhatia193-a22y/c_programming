#include<stdio.h>
int main()
{
    // if the ages of Ram,Shyam and ajay are input through the keyboard ,
    //write a program to determine the youngest of the three.;

    int ram,shyam,ajay;

    printf("Enter the age of ram: ");
    scanf("%d", &ram);
    printf("Enter the age of shyam: ");
    scanf("%d", &shyam);
    printf("Enter the age of ajay: ");
    scanf("%d", &ajay);

    if(ram<shyam && ram<ajay)
    {
        printf("ram is younger: ");
    }
    
    else if(shyam<ajay && shyam<ram)
    {
        printf("shyam is younger: ");
    }
    else if(ajay<ram && ajay<shyam)
    {
        printf("ajay is younger: ");
    }
      return 0;

}