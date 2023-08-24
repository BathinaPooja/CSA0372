#include<stdio.h>
#include<conio.h>
void main()
 {
    int a[100],i,j,n,temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    printf("entetr the elements");
    for(i=0;i<n;++i)
      {
       scanf("%d",&a[i]);
      }
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
     {
       if(a[i]>a[j])
     {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    }
    printf("In ascending order: ");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    getch();
}
