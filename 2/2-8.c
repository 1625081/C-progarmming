#include <stdio.h>
int main(){
  int a,b,c,d,x,y,z;
  //||:前面一个为真就不执行了
  //&&:前面一个为假就不执行了
  x= (a=1)&&(b=-2);
  printf("%d%d%d\n",x,a,b);
  y= (c=0)&&(b=5);
  printf("%d%d%d\n",y,c,b);
  z= (d=3)||(c=6);
  printf("%d %d %d %d %d %d %d\n",a,b,c,d,x,y,z);
}
