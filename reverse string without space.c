/*Reverse a string without space*/
#include<stdio.h>
int main()
{
	char str[100],temp;
	int i,len=0,j;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
		len++;
	i=len-1;
	for(j=0;j<i;j++)
	{
		if(str[i]==' ')
		{
			i--;
		}
		if(str[j]==' ')
		{
			j++;
		}
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
		i--;
	}

	puts(str);
	return 0;
}
