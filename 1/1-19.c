#include <stdio.h>
int main() {
  unsigned int a,b;
  scanf("%d %d",&a,&b);
  printf("%.3f\n",(double) a*a*a/(b*b));
  return 0;
}
