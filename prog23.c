#include<stdio.h>
int main()
{
    //write a program to read the age of a candidate and determine whether it is eligible 
    // for casting his / her own vote. ';

    int age,vote,noteligible;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>18)
    {
        printf("vote");
    }
    else
    {
        printf(" noteligible");
    }
return 0;
    
}
