#include <stdio.h>
int main() {
  float y;
  scanf("%f", &y);
  for (int i = 3; i > 0; i--) {
    y=i+i/y;
  }
  printf("%.5f\n",y);
}
