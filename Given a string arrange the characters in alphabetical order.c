/*Given a string arrange the characters in alphabetical order*/

#include<stdio.h>
#define max 60
int main()
{
	char string[100];
	int count[max]={0},j=0,i;
	printf("Enter the string: ");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		count[string[i]-'A']++;
	}
	for(i=0;i<max;i++)
	{
		while(count[i]!=0)
		{
			printf("%c",i+'A');
			count[i]--;
		}
	}
}
