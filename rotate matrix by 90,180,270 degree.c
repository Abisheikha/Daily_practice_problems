/*program to rotate given matrix by 90, 180,270 degree*/
#include<stdio.h>
int main()
{
	int mat[100][100],i,j,m,n;
	printf("Enter number of rows and columns of matrix: ");
	scanf("%d%d",&m,&n);
	printf("Enter elements of a matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Matrix after 90 degree rotation:\n");
	for(i=0;i<n;i++)
	{
		for(j=m-1;j>=0;j--)
		{
			printf("%d ",mat[j][i]);
		}
		printf("\n");
	}
	printf("Matrix after 180 degree rotation:\n");
	for(i=m-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("Matrix after 270 degree rotation:\n");
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",mat[j][i]);
		}
		printf("\n");
	}
}
