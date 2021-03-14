/* Find-lcm-of-two-numbers.*/

#include<stdio.h>
int main()
{
	int num1,num2,res,lcm,max;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	res=gcd(num1,num2);
	lcm=(num1*num2)/res;
//	printf("The gcd is %d\n",res);
	printf("The lcm is %d",lcm);
/*	max=(num1>num2)?num1 : num2;
	while(1)
	{
		if(max%num1==0 && max%num2==0)
		{
			printf("The lcm is %d",max);
			break;
		}
		max++;
	}
*/	
	return 0;
	
}
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return(gcd(b,a%b));
}
	
		
