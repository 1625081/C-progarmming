#include <stdio.h>
int main() {
  int m1,m2,n;
  scanf("%d",&n);
  if (n>=0&&n%2==0){
    m1=n/4+n%4/2;
    m2=n/2;
    printf("%d %d\n", m1,m2);
  }else
    printf("Wrong number\n");
}
