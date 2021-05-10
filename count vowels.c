/*Get a string and count the number of vowels*/

#include<stdio.h>
int main()
{
	char str[100];
	int i,count[65]={0};
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'|| str[i]=='A'|| str[i]=='e'||str[i]=='E' || str[i]=='i'||str[i]=='I' ||str[i]=='o'||str[i]=='O' ||str[i]=='u'||str[i]=='U')	
		{
			count[str[i]-'A']++;
		}
	}
	for(i=0;i<65;i++)
	{
		if(count[i]!=0)
		{
			printf("%c for %d times\n",i+'A',count[i]);
		}
	}
	return 0;
}
