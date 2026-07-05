#include<stdio.h>
int main()
{

    float quantity,price,total,discount;

    printf("Enter quantity: ");
    scanf("%f", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &price);

    total = quantity * price;

    if(total >=5000 && total < 10000){
        discount = 10;
    }
    else if(total >=10000 && total < 25000){
        discount = 25;
    }
    else{
        discount = 0;
    }

    printf("total amount =%.2f\n", total);
    printf("discount apllied = %.0f%%\n", discount);

    return 0;
}