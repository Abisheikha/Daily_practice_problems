/*Write a program in C to find transpose of a given matrix. */

#include<stdio.h>
int main()
{
	int mat[50][50],trans[50][50],row,col,i,j,k;
	printf("Enter no of rows and columns: ");
	scanf("%d %d",&row,&col);
	printf("Enter matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			trans[j][i]=mat[i][j];
		}
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
