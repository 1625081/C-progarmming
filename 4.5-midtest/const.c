#include <stdio.h>
int main() {
  long int a=0x17;
  printf("%ld\n%lu\n",a,sizeof(a));
  printf("%f\n", 0.123e3f);
  printf("%f\n", 5.6E-6);
  return 0;
}
