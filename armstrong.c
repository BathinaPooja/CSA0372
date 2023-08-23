#include<stdio.h>
int main()
{
	int n,a,n1,sum=0;
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
	if(n1==sum)
	{
		printf("armstrong");
	}
	else
	{
		printf("no");
	}
}
