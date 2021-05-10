/*Write a C Program to convert string of numbers to an integer using Recursion
Input: "1638"
Output: 1638*/

#include<stdio.h>
int value=0,i=0;
int main()
{
	char string[100];
	printf("Enter the string: ");
	gets(string);
	string_convert(string);
	printf("%d",value);
	return 0;
}
int string_convert(char *str)
{
	if(str[i]!=0)
	{
		value=(value*10) + (str[i]-'0');
	}
	else
	{
		return 0;
	}
	i++;
	string_convert(str);
}
