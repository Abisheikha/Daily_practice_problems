/*Remove duplicates in a sorted array*/

#include<stdio.h>
int main()
{
	int arr[100],i,n,k=0;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]!=arr[i+1])
			arr[k++]=arr[i];
	}
	arr[k]=arr[n-1];
	printf("The resulting array is:\n");
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;	
}
