#include<stdio.h>
int main()
{
    // write a program to accepy the height of a person in centimeter and
    // categorize the person according to their height.;

    int height,cm;

    printf("Enter a person height in cm: ");
    scanf("%d", &height);

    if(height<150 )
    {
        printf("chotu");
    }
    else if(height<170)
    {
        printf("tall");     
      }
      else if(height<190);
      {
        printf("lambu");
      }
      return 0;
    }
