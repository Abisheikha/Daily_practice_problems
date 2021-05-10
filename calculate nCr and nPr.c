/*calculate nCr and nPr*/
#include<stdio.h>
int main()
{
	int n,r,nCr,nPr;
	printf("Enter n and r: ");
	scanf("%d%d",&n,&r);
	nCr=func_ncr(n,r);
	nPr=func_npr(n,r);
	printf("%dC%d is %d\n%dP%d is %d",n,r,nCr,n,r,nPr);
	return 0;
}
int func_ncr(int n,int r)
{
	int res=factorial(n)/(factorial(r)*factorial(n-r));
	return res;
}
int func_npr(int n,int r)
{
	int res=factorial(n)/factorial(n-r);
	return res;
}
int factorial(int x)
{
	int fact=1,i;
	for(i=1;i<=x;i++)
		fact=fact*i;
	return fact;
}
