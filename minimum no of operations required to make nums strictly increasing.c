/*minimum no of operations required to make nums strictly increasing.c*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,oper=0,diff;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	int *arr=malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[i]<=arr[i-1])
		{
			diff=arr[i-1]-arr[i]+1;
			oper+=diff;
			arr[i]+=diff;
		}
	}
	printf("The array after modified is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\nMinimum no of operations required to make nums strictly increasing is %d",oper);
	return 0;
}
