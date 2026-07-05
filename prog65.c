#include<stdio.h>
int main()
{
	int year , td , rem;
	printf("\n Enter Any Year : ");
	scanf("%d",&year);
	td = ( year - 1 ) * 365;
	td += ( year - 1 ) / 4;
	td -= ( year - 1 ) / 100;
	td += ( year - 1 ) / 400;
	
	rem = td % 7;
	printf("\n On 1st January, %d has ",year);
	if( rem == 0 )
	{
		printf("Monday");
	}
	else if( rem == 1 )
	{
		printf("Tuesday");
	}
	else if( rem == 2 )
	{
		printf("Wednesday");
	}
	else if( rem == 3 )
	{
		printf("Thursday");
	}
	else if( rem == 4 )
	{
		printf("Friday");
	}
	else if( rem == 5 )
	{
		printf("Saturday");
	}
	else
	{
		printf("Sunday");
	}
	printf(".\n");
	return 0;
}
