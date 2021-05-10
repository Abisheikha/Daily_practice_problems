/*Find the no of occurances of 'the' int given string*/
#include<stdio.h>
int main()
{
	int i,count=0;
	char str[100];
	printf("Enter the string:\n");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		if(i==0 || str[i-1]==' ' )
		{
			if((str[i]=='t' || str[i]=='T') && (str[i+1]=='h' || str[i+1]=='H')&& (str[i+2]=='e' || str[i+2]=='E' )&& (str[i+3]==' ' || str[i+3]=='\0'))
			{
				count++;
			}
		}
		i++;
	}
	printf("The frequency of the word 'the' is: %d",count);
	return 0;
}
