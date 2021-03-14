/*Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.
Input the string : This Is A Test String.
Expected Output :
The given sentence is : This Is A Test String.
After Case changed the string is: tHIS iS a tEST sTRING.*/

#include<stdio.h>
int main()
{
	char str[100],res[100];
	int i,k=0;
	printf("Enter the string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
			res[k++]=str[i] + 32;
		else if(str[i]>='a'&&str[i]<='z')
			res[k++]=str[i] - 32;
		else if(str[i]==' ')
			res[k++]=' ';
	}
	res[k]='\0';
	for(i=0;res[i]!='\0';i++)
	{
		printf("%c",res[i]);
	}

}
