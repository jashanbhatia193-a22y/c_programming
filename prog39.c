#include<stdio.h>
int main()
{
    int age, amt;
    char h,g,l;

    printf("enter h (e/p): ");
    scanf(" %c", &h);
    if(h == 'e')
    {
        printf("enter age: ");
        scanf("%d", &age);
        
        if(age>=25 && age<35)
        {
                printf("enter gender (m/f): ");
                scanf(" %c", &g);
            
               printf("Gender %c ",g);
           
                if(g == 'm')
                {

                    printf("enter location: ");
                    scanf(" %c", &l);
                    
                    printf("enter amount: ");
                    scanf("%d", &amt);

                    if(l == 'c' && amt<=200000)
                    {
                        printf("4 per thoiusand");
                    }
                    else
                    if(l == 'v' && amt<=100000)
                    {
                        printf("3 per thoiusand");
                    }
                    else
                        printf("invalid");
                }
                else
                if(g == 'f')
                {
                     printf("Female Here");   
                }
                else
                printf("Invalid");   

        }
        
    }

    return 0;
    



}