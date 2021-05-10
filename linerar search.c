/*linear search*/

#include<stdio.h>
int main()
{
	int arr[100],n,search,i;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter search element: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			printf("The element %d is found in the position %d",arr[i],i+1);
			break;
		}
	}
}
