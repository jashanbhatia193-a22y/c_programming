#include<stdio.h>
int main()
{

char gender,status;

printf("Enter gender: ");
scanf("%c", &gender);
//fflush(stdin);
printf("Enter status: ");
scanf(" %c", &status);

if(gender== 'm' &&  (status == 'm' || status == 'u'))
{
    printf("hello Mr. India: ");
}
else if(gender== 'f' && status == 'u')
{
    printf("Hello miss India: ");
}
else if(gender=='f' && status == 'm')
{
    printf("Hello Mrs India: ");
}
else
    printf("Invalid...");
return 0;
}