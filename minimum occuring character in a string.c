/*Write a C program to find minimum occurring character in a string.
Input
Input string: I love learning programming at Codeforwin.
Output
Minimum occurring character is '.' = 1  */

#include<stdio.h>
#define max 126
int main()
{
	int arr[max]={0},i,min,index;
	char str[100];
	printf("Enter the string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		arr[str[i]-33]++;
	}
	min=arr[0];
	for(i=0;i<max;i++)
	{
		if(arr[i]!=0)
		{
			if(min==0 || min>arr[i])
			{
				min=arr[i];
				index=i;
			}
		}
	}
	printf("\nThe minimum occuring character is '%c' for %d times",index+33,arr[index]);
}
