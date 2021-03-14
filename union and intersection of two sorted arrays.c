/*Given two sorted arrays, find their union and intersection.*/

#include<stdio.h>
int func_union(int arr1[],int arr2[],int m, int n, int res[])
{
	int i=0,j=0,k=0;
	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j])
		{
		//	printf("%d ",arr1[i]);
			res[k++]=arr1[i];
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
	//		printf("%d ",arr2[j]);
			res[k++]=arr2[j];
			j++;
		}
		else
		{
		//	printf("%d ",arr1[i]);
			res[k++]=arr1[i];
			i++;
			j++;
		}
	}
	while(j<n)
	{
	//	printf("%d ",arr2[j]);
		res[k++]=arr2[j];
		j++;
	}
	while(i<m)
	{
	//	printf("%d ",arr1[i]);
		res[k++]=arr1[i];
		i++;
	}
	return k;
}
void intersection(int arr1[], int arr2[], int m, int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j])
			i++;
		else if(arr1[i]>arr2[j])
			j++;
		else
		{
			printf("%d ",arr1[i]);
			i++;
			j++;
		}
	}
}
int main()
{
	int arr1[50],arr2[50],m,n,i,j,x,res[100];
	printf("Enter no of elements of first and second array: ");
	scanf("%d%d",&m,&n);
	printf("Enter first array elements:\n");
	for(i=0;i<m;i++)
		scanf("%d",&arr1[i]);
	printf("Enter second array elements:\n");
	for(j=0;j<n;j++)
		scanf("%d",&arr2[j]);
	printf("The union of two arrays:\n");
	x=func_union(arr1,arr2,m,n,res);
	for(i=0;i<x;i++)
		printf("%d ",res[i]);
	printf("\nThe intersection of two arrays:\n");
	intersection(arr1,arr2,m,n);
	return 0;
}

