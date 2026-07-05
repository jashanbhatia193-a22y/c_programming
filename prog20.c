#include<stdio.h>
int main()
{
    float physics,chemistry,maths,english,music,marks,pass,fail,fail_count;

    printf("Enter physics marks: ");
    scanf("%f", &physics);
    if(physics>33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    printf("Enter chemistry marks: ");
    scanf("%f", &chemistry);
    if(chemistry>33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    printf("Enter maths marks: ");
    scanf("%f", &maths);
    if(maths>33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    printf("Enter music marks: ");
    scanf("%f", &music);
    if(music>33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    printf("Enter english marks: ");
    scanf("%f", &english);
    if(english>33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    if(fail_count == 1)
    {
        printf("compartment\n");
    }
    else if(fail_count >= 2)
    {
        printf("fail\n");
    }
    else
    {
        printf("pass\n");
    }
    printf("Enter count = %d%d",  pass fail);
    return 0;
}
