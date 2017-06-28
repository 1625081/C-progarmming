#include <stdio.h>
#include <string.h>

int main() {
  char a[110];
  char b[110]="";
  scanf("%s",a);
  int j=0;
  for (int i=0;i<strlen(a);i++){
    if (a[i]>='A'&&a[i]<='Z'){
      b[j]=a[i];
      j++;
    }
  }
  for (int i=strlen(b)-1;i>=0;i--){
    printf("%c",b[i]);
  }
  printf("\n");
}
