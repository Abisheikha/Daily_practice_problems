/*Reverse an array inplace*/
#include<stdio.h>
int main()
{
	int i,arr[100],n,j;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	j=n-1;
	for(i=0;i<j;i++)
	{
		arr[i]=arr[i]^arr[j];
		arr[j]=arr[i]^arr[j];
		arr[i]=arr[i]^arr[j];
		j--;
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
