/*program to find the second largest element in an array */

#include<stdio.h>
int main()
{
	int i,n,arr[50],max,second;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=0;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	second=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=max)
		{
			if(second<arr[i])
				second=arr[i];
		}
	}
	printf("The second largest element is %d",second);
}
