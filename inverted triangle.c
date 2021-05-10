/*
input: 5

*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main()
{
	int i,j,n,x,k;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	x=n+n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i!=0)
				printf("  ");
		}
		for(k=0;k<x;k++)
			printf("* ");
		printf("\n");
		x=x-2;
	}
}
