#include <stdio.h>
#include <math.h>
//题目会保证根只有一个
double A=0;
double f(double x){
  return x*x-A;
}
double bisection(double a,double b, double e){
  double x,y;
  do{
    x=(a+b)/2;
    y=f(x);
    if (f(a)*y>0)//二者同号
      a=x;
    else
      b=x;
  }while(fabs(y)>e);
  return x;
}

int main(){
  double a,b;
  scanf("%lf", &A);
  scanf("%lf %lf",&a,&b);
  printf("%f\n", bisection(a,b,1e-3));
}
