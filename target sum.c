#include<stdio.h>
int main()
{
	int n,sum,i,arr[100],temp,j;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the sum: ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		temp=(sum-arr[i]);
		for(j=i+1;j<n;j++)
		{
			if(temp==arr[j])
				printf("The numbers are %d and %d\n",arr[i],arr[j]);
		}
	}
	return 0;
}
