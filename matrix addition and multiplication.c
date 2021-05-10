/*Matrix addition and multiplication*/
#include<stdio.h>
int main()
{
	int i,mat1[100][100],mat2[100][100],res[100][100],res_mul[100][100],j,m1,n1,m2,n2,k,ch;
	printf("Enter number of rows and columns of first matrix: ");
	scanf("%d%d",&m1,&n1);
	printf("Enter elements of a matrix: ");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter number of rows and columns of second matrix: ");
	scanf("%d%d",&m2,&n2);
	printf("Enter elements of a matrix: ");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("1.Addition\n2.Multiplication");
	scanf("%d",&ch);
	if(ch==1)
	{
		if(m1!=m2 || n1!=n2)
		{
			printf("The addition operation cannot be performed");
		}
		else
		{
			for(i=0;i<m1;i++)
			{
				for(j=0;j<n2;j++)
				{
					res[i][j]=mat1[i][j]+mat2[i][j];
				}
			}
			printf("The result matrix after addition is:\n");
			for(i=0;i<m2;i++)
			{
				for(j=0;j<n2;j++)
				{
					printf("%d ",res[i][j]);
				}
				printf("\n");
			}
		}
	}
	if(ch==2)
	{
		if(n1!=m2)
		{
			printf("Matrix multiplication cannot be performed");
		}
		else
		{
			for(i=0;i<m1;i++)
			{
				for(j=0;j<n2;j++)
				{
					res_mul[i][j]=0;
					for(k=0;k<n2;k++)
					{
						res_mul[i][j]+=mat1[i][k]*mat2[k][j];
					}
				}
			}
			printf("The matrix after multiplication is:\n");
			for(i=0;i<m2;i++)
			{
				for(j=0;j<n2;j++)
				{
					printf("%d ",res_mul[i][j]);
				}
				printf("\n");
			}	
		}
	}
}

