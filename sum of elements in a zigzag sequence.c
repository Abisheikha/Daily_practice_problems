/*Sum of elements in zig zag sequence in given matrix.*/

#include<stdio.h>
int main()
{
	int mat[50][50],res=0,row,col,i,j,k;
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
	for(k=0;k<col;k++)
	{
		res=res+mat[0][k];
	}
	j=row-1;
	for(k=0;k<col;k++)
	{
		res=res+mat[j][k];
	}
	j=col-2;
	for(i=1;i<row-1;i++)
	{
		res=res+mat[i][j];
		j--;
	}
	printf("The sum of elements in a zigzag sequence is %d",res);
	return 0;
}
