#include <stdio.h>
int a=4;

int f() {
  a=3;
  return a;
}

int main() {
  //a=3;
  f();
  printf("%d\n",a);
  return 0;
}
