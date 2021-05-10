/*binary search*/

#include<stdio.h>
int main()
{
	int arr[100],n,search,i,low=0,high,mid;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	high=n-1;
	printf("Enter search element: ");
	scanf("%d",&search);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==search)
		{
			printf("The element %d is found in the position %d",arr[mid],mid+1);
			break;
		}
		else if(arr[mid]<search)
		{
			low=mid+1;	
		}
		else if(arr[mid]>search)
		{
			high=mid-1;
		}
	}
}
