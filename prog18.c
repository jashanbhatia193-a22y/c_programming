#include<stdio.h>
int main()
{
    // A casheir has currency notes of 10 , 50 and 100. if the amount to be withdraw is input through the keyboard in hundreds, 
    //find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.;

    int amount,cn10,total,cn50,cn100;

    printf("Enter the amount of withdraw: ");
    scanf("%d", &amount);

cn10 = amount /10;
cn50 = amount /50;
cn100= amount /100;

total = cn10 + cn50 + cn100;

printf("total =%d", total);






    
}