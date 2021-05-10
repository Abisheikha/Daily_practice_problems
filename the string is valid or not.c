#include<stdio.h>
#include<string.h>
int main()
{
	int i,b=0;
	char str[100];
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
			b++;
		else if(str[i]==')')
			b--;
		else if(str[i]=='*' || str[i]=='+' ||str[i]=='/' ||str[i]=='%' ||str[i]=='-')
		{
		 	if(str[i-1]>=97 && str[i-1]<=122 && str[i+1]>=97 && str[i-1]<=122)
		 		i++;
		 	else
		 		break;
		}
	}
	if(b==0 && i==strlen(str))
		printf("%s string is valid",str);
	else
		printf("%s is not valid",str);
	return 0;
}
