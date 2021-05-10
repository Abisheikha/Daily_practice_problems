/*Reverse string by words*/

#include<stdio.h>
int main()
{
	char str[100],temp,k=0,res[100];
	int i,len=0,j,start,end;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
		len++;
	end=len-1;
	while(end>0)
	{
		while(str[end]!=' ' && end!=0)
		{
			end--;
		}
		if(end==0)
			start=end;
		else
			start=end+1;
		while(str[start]!=' ' && str[start]!='\0')
		{
			res[k++]=str[start];
			start++;
		}
		res[k++]=' ';
		end--;	
	}
	res[k++]='\0';
	puts(res);
	return 0;
}
