// Program to check the leap year

#include<stdio.h>
void main()
{
	int  year;
    printf("Enter a year to check: \n");
    scanf("%d", &year);
    if(year%4==0)
    {
    	if(year%100==0)
    	{
    		if(year%400==0)
    			printf("\n%d is a leap year",year);
    		else
    			printf("\n%d is not a leap year",year);
		}
		else
		{
    			printf("\n%d is a leap year",year);
		}
	}
	else
	{
		printf("\n%d is not a leap year",year);
	}
	
}
