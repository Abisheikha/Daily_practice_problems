/*program to split string by space into words
Test Data :
Input a string : this is a test string
Expected Output :
Strings or words after split by space are :
this
is
a test
string .*/

#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter the string:\n");
	gets(str);
	printf("Strings or words after split by spaces are:\n");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		printf("%c",str[i]);
		else
		printf("\n");
	}
}
