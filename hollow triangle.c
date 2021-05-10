/*
input :6
     *
    * *
   *   *
  *     *
 *       *
***********

*/

#include<stdio.h>
int main()
{
	int i,j,n,x=1,k,l;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			if(i!=0)
				printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			if(j==1 || j==(2*i)-1 || i==n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");	
	}
}
