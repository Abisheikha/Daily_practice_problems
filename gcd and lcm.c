/*find lcm and gcd of two numbers*/

#include<stdio.h>
int main()
{
	int num1,num2,i,gcd,max;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	for(i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
			gcd=i;
	}
	printf("The gcd is: %d\n",gcd);
	max=(num1>num2)?num1:num2;
	while(1)
	{
		if(max%num1==0 && max%num2==0)
		{
			printf("The lcm is %d",max);
			break;
		}
	max++;
	}
	return 0;
}
