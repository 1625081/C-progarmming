#include <stdio.h>
int main() {
  int n,m,a,b,c=0;
  scanf("%d",&n);
  for(;n&&scanf("%d",&m);n--){
    a=b;
    b=c;
    c=m;
    if(b>c&&a<b) printf("%d %d %d\n",a,b,c);
  }
  return 0;
}QZ
