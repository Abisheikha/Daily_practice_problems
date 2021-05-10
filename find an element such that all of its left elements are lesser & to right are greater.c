/*Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller 
and all right elements to it are greater than it.
Input:
N = 4
A[] = {4, 2, 5, 7}
Output:
5
Explanation:
Elements on left of 5 are smaller than 5
and on right of it are greater than 5.*/
#include<stdio.h>
int main()
{
	int arr[100],i,j,n,k,count,count1;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=1;i<n-1;i++)
	{
		count=0;
		count1=0;
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<arr[i])
			{
				count++;
			}
		}
		if(count==i)
		{
			count1=0;
			for(k=i+1;k<n;k++)
			{
				if(arr[k]>arr[i])
				{
					count1++;
				}
			}
		}
		if(count1==n-i-1)
		{
			printf("The element is %d",arr[i]);
			return 0;
		}
	}
	return 0;
}
