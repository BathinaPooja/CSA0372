#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,j,key,n;
 printf("\nEnter the n value:\n");
 scanf("%d",&n);
 printf("\nenter the elements");
 for (i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<n;i++)
 {
  key=a[i];
  j=i-1;
  while(j>=0 && key<a[j])
  {
   a[j+1]=a[j];
   j=j-1;
   }
  a[j+1]=key;
 }
 printf("\n\nElements after sorting: \n");
 for(i=0;i<n;i++)
 printf("%d\n",a[i]);
 getch();
}
