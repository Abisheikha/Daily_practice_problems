/*Print the sum of digits of given number*/
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("Enter number: ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	printf("The sum is:%d",sum);
	return 0;
}
