#include<stdio.h>
int main()
{
	int n,x,a[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		break;
	}
	if(i<n)
	{
		printf("%d",i+1);
	}
	else
	{
		printf("not found");
	}
	return 0;
}
