/*Decimal to binary Conversion.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i=0;
	long int res[50];
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		res[i]=num%2;
		num=num/2;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",res[i]);
	}
	return 0;
}

