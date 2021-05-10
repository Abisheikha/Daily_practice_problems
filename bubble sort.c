/*Bubble sort*/
#include<stdio.h>
int main()
{
	int sort[100],i,j,n;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&sort[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(sort[j]>sort[j+1])
			{
				sort[j]=sort[j]^sort[j+1];
				sort[j+1]=sort[j]^sort[j+1];
				sort[j]=sort[j]^sort[j+1];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",sort[i]);
	}
}
