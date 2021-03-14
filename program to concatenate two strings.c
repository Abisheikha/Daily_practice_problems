/*Write a C program to concatenate twostrings
Input
Input string1: I love
Input string2: Codeforwin
Output
Concatenated string: I love Codeforwin*/

#include<stdio.h>
int main()
{
	char str1[100],str2[100],res[100];
	int i,k=0,j;
	printf("Enter two strings:\n");
	gets(str1);
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		res[k++]=str1[i];
	}
	res[k++]=' ';
	for(j=0;str2[j]!='\0';j++)
	{
		res[k++]=str2[j];
	}
	res[k]='\0';
	for(i=0;res[i]!='\0';i++)
	{
		printf("%c",res[i]);
	}
	return 0;
}
	
