/*Print first non repeating character in a string*/
#include<stdio.h>
int main()
{
	char str[100];
	int i,count[256]={0};
	printf("Enter the string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count[str[i]]++;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(count[str[i]]==1)
		{
			printf("The first non repeating char is %c",str[i]);
			break;
		}
	}
	return 0;
}
