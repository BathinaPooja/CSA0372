#include<stdio.h>
int main()
{
	int n,a,m=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		m=m*10+a;
		n=n/10;
	}
	printf("%d",m);
	
}
