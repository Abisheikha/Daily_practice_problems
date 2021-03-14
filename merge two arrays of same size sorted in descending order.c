/*Write a program in C to merge two arrays of same size sorted in decending order.
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1         */

#include<stdio.h>
int main()
{
	int i,m,n,a[50],b[50],j,k=0,res[50],temp;
	printf("Enter no of elements of first and second array: ");
	scanf("%d%d",&m,&n);
	printf("Enter first array elements:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter second array elements:\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	i=0;
	j=0;
	
	while(i<m+n)
	{
		if(i<m)
		{
			res[k]=a[i];
			k++;
		}
		else
		{
			res[k]=b[j];
			k++;
			j++;
		}
		i++;
	}
	for(i=0;i<m+n;i++)
	{
		for(j=i+1;j<m+n;j++)
		{
			if(res[i]<res[j])
			{
				res[i]=res[i]^res[j];
				res[j]=res[i]^res[j];
				res[i]=res[i]^res[j];
			/*	temp=res[i];
				res[i]=res[j];
				res[j]=temp;*/
			}
		}
	}
	printf("The array after merging is:\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d ",res[i]);
	}
	return 0;
}
	
