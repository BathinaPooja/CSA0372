#include<stdio.h>
#include<conio.h>
void main()
{
  int n,temp,i,j,a[20];
  printf("\n Enter n value: ");
  scanf("%d",&n);
  printf("Enter elements:");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
   	{
	   if(a[i]>a[j])
  	{
	  temp=a[i];
  	  a[i]=a[j];
  	  a[j]=temp;
  	}
  }
}
  printf("After sorting: ");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  getch();
}
