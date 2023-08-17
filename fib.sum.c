#include <stdio.h>
int main()
{
	int n1=0, n2=1, n, n3, sum=0;
	printf("enter the range of fibonacci series: ");
	scanf("%d", &n);
	printf("the fibonacci series is: \t");
	while(n1<n)
	{
		printf("%d\t", n1);
		sum+=n1;
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
	}
	printf("\n their sum is =%d", sum);
	return 0;
}
