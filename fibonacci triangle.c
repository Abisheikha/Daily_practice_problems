/*Write a C program to generate fibonacci triangle.
ex: input : 5
output:
1
1  1
1  1  2
1  1  2  3
1  1  2  3  5

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,b=1,res=1,n,i,j,x;
	printf("Enter a number: ");
	scanf("%d",&n);
	x=n;
	for(i=0;i<n;i++)
	{
		a=0,b=1;
		printf("%d ",b);
		for(j=0;j<i;j++)
		{
			res=a+b;
			printf("%d ",res);
			a=b;
			b=res;
		}
		printf("\n");	
	}
	return 0;
}
