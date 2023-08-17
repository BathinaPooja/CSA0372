#include<stdio.h>
int main()
{
	int n[10]={1,14,16,23,25,80};
	int i,c;
	scanf("%d",&c);
	for(i=0;i<=5;i++)
	{
		if(n[i]==c)
		{
			printf("%d",i+1);
		}
	}
}
