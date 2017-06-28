#include <stdio.h>
// #include <ctype.h>
// #include <stdlib.h>
#define MAX 1000
#define n 3
int t[MAX];

void mergesort(int *a,int left,int right){
  if (right==left) return;
  int middle=(left+right)/2;
  mergesort(a,left,middle);
  mergesort(a,middle+1,right);
  int i=left,j=left,k=middle+1;
  while(j<=middle&&k<=right)
    t[i++]=(a[j]<=a[k])?a[j++]:a[k++];
  while(i<=right)
    (j>middle)?(t[i++]=a[k++]):(t[i++]=a[j++]);
  for(i=left;i<=right;i++){
    a[i]=t[i];
  }
  return;
}

int main(){
  int a[MAX],i;
  //char c;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
  // for(i=0;(c=getchar())!='\n';){
  //   if(isdigit(c)){
  //     ungetc(c,stdin);
  //     scanf("%d",&a[i++]);
  //   }
  // }
  mergesort(a,0,n-1);
  for(i=0;i<=n-1;i++)
    printf("%d ",t[i]);
}
