/*Print even nos upto n*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			printf("%d ",i)	;
	}
	return 0;
}
