#include <stdio.h>
int main() {
  int a,s=0;
  scanf("%d",&a);
  while(a>0){
    int b=a%10;
    s+=b;
    a=a/10;
  }
  printf("%d\n",s);
  return 0;
}
