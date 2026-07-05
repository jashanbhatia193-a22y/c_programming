#include<stdio.h>
int main()
{
    int hr;

    printf("Enter hr: ");
    scanf("%d", &hr);

    // time required to complete for a job ; 


    if(hr>=2 && hr<3)
    {
        printf("Highly effficient: ");
    }
    else if(hr>=3 && hr<4)
    {
        printf("Improve speed: ");
    }
    else if(hr>4 && hr<5)
    {
        printf("training improve his speed: ");
    }
    else if(hr>5)
    {
        printf("Leave the company: ");
    }
    return 0;
}