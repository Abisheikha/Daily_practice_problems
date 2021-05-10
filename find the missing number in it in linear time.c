/*Given an array of n-1 distinct integers in the range of 1 to n, find the missing number in it in linear time
Example: {1,2,3,4,5,7,8,9,10}
OP: The missing number is s*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,i,n,sum=0,total;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		if(i!=0)
		sum+=arr[i-1];
		scanf("%d",&arr[i]);
	}
	total=n*(n+1)/2;
	printf("The missing number is %d",total-sum);
	return 0;
}
