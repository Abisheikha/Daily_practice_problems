/*Given an unsorted array A of size N that contains only non-negative integers, 
find a continuous sub-array which adds to a given number S.
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.*/
#include<stdio.h>
int main()
{
	int arr[100],n,i,j,sum=0,s;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter sum: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		j=i+1;
		while(j<n)
		{
			sum+=arr[j];
			if(sum==s)
			{
				printf("start and end index is %d and %d",i+1,j+1);
				return;
			}
			if(sum>s)
				break;
		j++;
		}
	sum=0;
	}
	return 0;
}
