/*Program to remove all characters in a string except alphabets.
Enter a string: p2'r-o@gram84iz./
Output String: programiz*/

#include<stdio.h>
int main()
{
	int i,j=0;
	char str[100],res[100];
	printf("Enter the string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
			res[j++]=str[i];
	}
	res[j]='\0';
	for(i=0;res[i]!='\0';i++)
	{
		printf("%c",res[i]);
	}
	return 0;
}
