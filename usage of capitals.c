/*Given a word, you need to judge whether the usage of capitals in it is as follows.
All letters in this word are capitals, like "USA". (Or)
All letters in this word are not capitals, like "hello". (Or)
Only the first letter in this word is capital, like "Google".
Input: GooGle
Op: False*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int string_len,i,caps=0,small=0,fst_caps=0;
	printf("Enter the string: ");
	gets(str);
	string_len=strlen(str);
	i=0;
	if(str[0]>='A' && str[0]<='Z')
	{
		fst_caps=1;
		caps++;
		i++;
	}
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
			caps++;
		else if(str[i]>='a' && str[i]<='z')
			small++;
		i++;
	}
	if(caps==string_len || small==string_len || (fst_caps==1 && small==string_len-1))
		printf("True");
	else
		printf("False");
	return 0;
}
