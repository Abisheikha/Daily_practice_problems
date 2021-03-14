/*Circular rotation of arrays by k positions*/
/*For example, consider the following array = [4, 5, 6], number of rotations = 2, indexes to be checked = [0,1,2]
Initial array   [4, 5, 6]
After one rotation   [6, 4, 5]
After two rotations   [5, 6, 4]*/

#include<stdio.h>
int main()
{
	int arr[50],temp,i,n,j,k;
	printf("Enter number of array elements: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter no of rotations ");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		temp=arr[n-1];
		for(j=n-1;j>0;j--)
			arr[j]=arr[j-1];
		arr[0]=temp;
	}
	printf("The array after %d rotation:\n",k);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
