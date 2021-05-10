/*program to check whether a String is a Pangram or not. A string is a Pangram if the string contains all the English alphabet letters.
Sample input: "The quick brown fox jumps over a lazy dog".
Output : true

Sample input: "The quick brown fox jumps".
output : false*/

#include<stdio.h>
int main()
{
	char pangram[300];
	int count[26]={0},i;
	printf("Enter the string: ");
	gets(pangram);
	for(i=0;pangram[i]!='\0';i++)
	{
		if(pangram[i]>='a' && pangram[i]<='z')
			count[pangram[i]-'a']++;
		else if(pangram[i]>='A' && pangram[i]<='Z')
			count[pangram[i]-'A']++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]==0)
		{
			printf("False");
			return 0;
		}
	}
	if(i==26)
		printf("True");
	return 0;
}
