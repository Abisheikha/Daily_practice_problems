/*Selection sort*/
#include<stdio.h>
int main()
{
	int sort[100],i,j,n,min_index,count;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&sort[i]);
	for(i=0;i<n-1;i++)
	{
		count=0;
		min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(sort[min_index]>sort[j])
			{
				min_index=j;
				count=1;
			}
		}
		if(count!=0)
		{
		sort[i]=sort[i]^sort[min_index];
		sort[min_index]=sort[i]^sort[min_index];
		sort[i]=sort[i]^sort[min_index];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",sort[i]);
	}
}
