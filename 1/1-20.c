#include <stdio.h>
int main() {
unsigned int x;
  scanf("%d",&x);
  double y;
  y=(double) x;
  printf("%.5f\n",1+1/(2+2/(3+3/y)));
  return 0;
}
