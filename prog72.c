#include<stdio.h>
int main()
{
    int a[3] = {5,1,1},temp[3],i,j,element,repeat;


for(i =0; i < 3; i++)
{
    for(j =i +1; j < 3; j++)
    {
        if(a[i] == a[j])
        {
            printf("%d", a[i]);
            return 0;
        }
    }
}
    return 0;
 
}