/*Shuffle the given array {x1,x2,x3,y1,y2,y3} like {x1,y1,x2,y2,x3,y3}
Example input : array:{2,6,7,1,8,9}
n=total length/2
output: {2,1,6,8,7,9}

ex input: {1,2,3,4,5,6,7,8}
n=4
output: {1,5,2,6,3,7,4,8}*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,x,*arr,temp;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	x=n/2;
	while(i<n/2)
	{	
		temp=arr[n/2];
		while(i<n/2)
		{
			arr[x]=arr[x-1];
			x--;
		}
		arr[(n/2)-x]=temp;
	}
	
}
