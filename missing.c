#include<stdio.h>
int main()
{
	int a[]={1,3,5,2,4};
	int i,l=0,m=0;
	l=sizeof(a)/sizeof(a[0]);
	m=((l+1)*(l+2))/2;
	for(i=0;i<l;i++)
	{
		m=m-a[i];
	}
	printf("%d",m);
	return 0;
}
