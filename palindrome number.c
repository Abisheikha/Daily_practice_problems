/*To find whether the given number is palindrome or not*/
#include<stdio.h>
int main()
{
	int num,rev=0,temp;
	printf("Enter number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rev=(rev*10)+num%10;
		num=num/10;
	}
	if(temp==rev)
		printf("The number %d is a palindrome number" ,temp);
	else
		printf("The number %d is not a palindrome number",temp);
	return 0;
}
