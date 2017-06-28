#include <stdio.h>
int main() {
  int n=0;
  scanf("%d",&n);
  int a[n][n];
  for(int j=0;j<n;j++)
    for(int i=0;i<n;i++)
      a[i][j]=0;
  int i=0,j=0,anchor=0,k=n;
  a[0][0]=1;
  while(i!=k/2||i!=j){      //i!=n/2||i!=j)
    // i==0
    while(j<n){
      if (j>0){
        a[i][j]=a[i][j-1]+1;
        if(i!=j) a[j][i]=4*(n-anchor)-2+2*(a[anchor][anchor]-1)-a[i][j];
      }
      j++;
    }
    j--;
    // j==n-1
    while(i<n){
      if (i>anchor){
        a[i][j]=a[i-1][j]+1;
        if(i!=j) a[j][i]=4*(n-anchor)-2+2*(a[anchor][anchor]-1)-a[i][j];
      }
      i++;
    }
    n--;
    j=i=++anchor;
  }
  if (a[i][j]==0) a[i][j]=k*k;
  for (i=0;i<k;i++)
    for (j=0;j<k;j++){
      if (j!=k-1) printf("%d ",a[i][j]);
      else printf("%d\n", a[i][j]);
    }
}
