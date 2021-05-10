/*Count number of duplicate elements in an array*/
#include<stdio.h>
int main()
{
	int arr[100],i,n,j,count=0;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
		}
	}
	printf("The number of duplicate elements is: %d",count);
	return 0;
}
