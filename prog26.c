#include<stdio.h>
int main()
{
    // input any day number and display its equivalent day name.;

    int day;

    printf("Enter day number: ");
    scanf("%d", &day);

    switch(day) 
    {
        case 1:
            printf("monday");
            break;
        
        case 2:
            printf("tuesday");
            break;
        
        case 3:
            printf("wednessday");
            break;
        
        case 4:
            printf("thursday");
            break;

        case 5:
            printf("friday");
            break;

        case 6:
            printf("saturday");
            break;

        case 7:
            printf("sunday");
            break;

        default:
        printf("Invalid");
    }
    return 0;
}
