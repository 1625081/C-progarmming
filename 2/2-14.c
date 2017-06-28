#include <stdio.h>
#include <math.h>
int main() {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int m;
  if (abs(a)>=abs(b)&&abs(a)>=abs(c))
    m=abs(a);
  else if (abs(b)>=abs(a)&&abs(b)>=abs(c))
    m=abs(b);
  else
    m=abs(c);
  printf("%d\n",m);
  return 0;
}
