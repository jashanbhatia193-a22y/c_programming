#include<stdio.h>
int main()
{
    int type,inches,coloured,bw;

    printf("Enter tv type(1= coloured, 2= bw): ");
    scanf("%d", &type);
    //fflush(stdout);
    printf("Enter inches: ");
    scanf(" %d", &inches);

if(type ==1)
{
   switch(inches)
   {
    case 14:
    {
        printf("3000");
        break;
    }
    case 20:
    {
        printf("4200");
        break;
    }
    case 21:
    {
        printf("5500");
        break;
    }
    default:
    printf("Invalid");
} 
   
   }
   if(type ==2)

   {
    switch(inches) 
    {
      case 20: 
      {
        printf("2500");
        break;
      }
      case 21:
      {
        printf("5200");
        break;
      }
      default:
      printf("Invalid");
    }
    return 0;
   }
  
}