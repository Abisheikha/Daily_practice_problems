#include<stdio.h>
int main()
{
	int x,y,last_row,last_col,m,n,mat[50][50],i,j;
	printf("Enter no of rows and coulmn: ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&mat[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
	x=0,y=0,last_row=m-1,last_col=n-1;
	while(y<=last_row && x<=last_col)
	{
		for(i=y;i<=last_col;i++)
			printf("%d ",mat[y][i]);
		y++;
		for(i=y;i<=last_row;i++)
			printf("%d ",mat[i][last_col]);
		last_col--;
		for(i=last_col;i>=x;i--)
			printf("%d ",mat[last_row][i]);
		last_row--;
		for(i=last_row;i>=y;i--)
			printf("%d ",mat[i][x]);
		x++;
	}
	return 0;
}
