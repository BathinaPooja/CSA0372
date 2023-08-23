#include<stdio.h>
int main()
{
	int a[10]={11,2,40,60,20,11,60,80,40};
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
			}
		}
	}
	
}
