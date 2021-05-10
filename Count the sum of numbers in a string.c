/*Count the sum of numbers in a string*/

#include<stdio.h>
int main()
{
	char str[100];
	int i,sum=0;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')	
		{
			sum=sum+(str[i]-'0');
		}
	}
	printf("The sum is %d",sum);
	return 0;
}
