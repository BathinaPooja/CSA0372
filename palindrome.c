#include <stdio.h>
int main() {
  int n,m=0,a,n1;
    scanf("%d",&n);
    n1=n;
    while (n!=0) {
        a=n%10;
        m=m*10+a;
        n/=10;
    }
    if (n1==m)
        printf("%d is a palindrome.",n1);
    else
        printf("%d is not a palindrome.",n1);

    return 0;
}
