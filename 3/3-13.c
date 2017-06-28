#include <stdio.h>
#include <math.h>
int main() {
  for (int i=2,j=0;i<1000;i++){
    int s=2;
    for (s=2;s<sqrt(i)+1;s++){
      if (i%s==0&&i!=s) break;
    }
    if (s>=sqrt(i)+1){
      j++;
      printf("%d ",i);
    }
    if (j==10){
      printf("\n");
      j=0;
    }
  }
  return 0;
}
