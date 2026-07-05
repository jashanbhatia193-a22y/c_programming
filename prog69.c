#include<stdio.h>
int main()
{
    int marks[9] = {40,35,31,37,60,55,39,36,70},grace,i,final_marks,original_marks,fail;
    int temp[9]={0};
    for(i =0; i < 9; i++)
    {
        if(marks[i]>=35 && marks[i] < 40)
        { 
            grace = 40 - marks[i];
            marks[i] = marks[i] + grace;
            temp[i] = 1;
        }
    }
    
    for(i =0; i < 9; i++)
    {
        if(temp[i] == 1)
            printf("%d*\n", marks[i]);
        else
            printf("%d\n", marks[i]);    
    }
    
return 0;
}     