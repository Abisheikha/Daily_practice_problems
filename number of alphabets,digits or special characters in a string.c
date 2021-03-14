/*program to find total number of alphabets,digits or special charecters in a string
Input
Input string: I love Codeforwin.
Output
Alphabets = 15
Digits = 0
Special characters = 3        */

#include<stdio.h>
#include<stdio.h>
int main()
{
	char str[100];
	int i,alphabets=0,digits=0,splChars=0;
	printf("Enter the string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z')
			alphabets++;
		else if(str[i]>='0' && str[i]<='9')
			digits++;
		else if(str[i]==' ')
			continue;
		else 
			splChars++;
	}
	printf("The no of alphabets is %d\nThe no of digits is %d\nThe no of special characters is %d",alphabets,digits,splChars);
}
