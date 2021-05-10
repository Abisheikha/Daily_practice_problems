/*Greatest among three numbers in ternary operator*/
#include<stdio.h>
int main()
{
	int a,b,c,res;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	res=((a>b && a>c)?a:((b>c && b>a)?b:c));
	printf("The greater number is %d",res);
	return 0;
}
