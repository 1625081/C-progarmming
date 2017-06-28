#include <stdio.h>
int main() {
  int a10=17;char a16[100];int i=0;
  char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  while(a10>0){
    int b=a10%16;
    a16[i++]=hex[b];
    a10=a10/16;
  }
  printf("%s\n",a16);
  return 0;
}
