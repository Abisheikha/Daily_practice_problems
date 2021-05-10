/*compare strings without strcmp*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,len1,len2;
	printf("Enter two strings: ");
	gets(str1);
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1!=len2)
	{
		printf("The given string are not equal.");
		return;
	}
	for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			printf("The given strings are not equal");
			return 0;
		}
	}
	printf("The given strings are equal.");
	return 0;
}
