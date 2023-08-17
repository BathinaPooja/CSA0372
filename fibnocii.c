#include<stdio.h>
int main()
{
	int n,n1=0,n2=1,n3,i,sum=0;
	n3=n1+n2;
	scanf("%d",&n);
	printf("%d",n1);
	printf("%d",n2);
	for(i=3;i<=n;i++)
	{
		printf("%d",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
	return 0;
}
