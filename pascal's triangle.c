/*Pascal's triangle*/

#include<stdio.h>
int main()
{
	int i,j,rows,space,coef;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(space=0;space<rows-i;space++)
			printf(" ");
		for(j=0;j<=i;j++)
		{
			if(i==0 || j==0)
				coef=1;
			else
				coef=coef*(i-j+1)/j;
			printf(" %d",coef);
		}
		printf("\n");
	}
}
