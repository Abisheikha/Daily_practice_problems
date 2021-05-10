/*sort 0's 1's in O(n) complexity*/
#include<stdio.h>
int main()
{
	int count[2]={0},i,n,ele;
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ele);
		count[ele]++;
	}
	for(i=0;i<2;i++)
	{
		while(count[i]!=0)
		{
			printf("%d ",i);
			count[i]--;
		}
	}
	return 0;
}
