/*Write a C program to print number triangle.
ex: input 7
output: enter the range= 7
      1
     121
    12321
   1234321
  123454321
 12345654321
1234567654321   */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,temp,x;
	printf("Enter the ranges: ");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<=n;i++)
	{
		for(j=temp;j>0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(x=k-2;x>0;x--)
		{
			printf("%d",x);
		}
		temp--;
		printf("\n");
	}
}
