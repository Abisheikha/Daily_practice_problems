/*Get three numbers as input and display them in ascending and descending order(without using array)*/

#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("Enter three nos: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("The nos in descending order is:\n");
	for(i=0;i<3;i++)
	{
	if(a>b && a>c)
	{
		printf("%d\n",a);
		a=0;
	}
	else if((b>a && b>c))
	{
		printf("%d\n",b);
		b=0;
	}
	else
	{
		printf("%d\n",c);
		c=0;
	}
	}
}
