#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sametype(char a,char b){
  if (isdigit(a)&&isdigit(b))
    return 1;
  else if (islower(a)&&islower(b))
    return 1;
  else if (isupper(a)&&isupper(b))
    return 1;
  else
    return 0;
}

int main() {
  char a[1005];
  char b[1005];
  scanf("%s",a);
  int j=0;
  for (int i=0;i<strlen(a);i++){
    if (a[i]=='-'&&a[i-1]<a[i+1]&&sametype(a[i-1],a[i+1])){
      while(b[j-1]+1<a[i+1]){
        b[j]=b[j-1]+1;
        j++;
      }
    }else if(a[i]=='-'){
      b[j-1]='\0';
      j--;
      i++;
    }else{
      b[j]=a[i];
      j++;
    }
  }
  b[j]='\0';
  printf("%s",b);
}
