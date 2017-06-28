#include <stdio.h>
#include <string.h>
#define MAX 1000
#define n 3

typedef struct stus{
  int age;
  char name[100];
}stu;

stu t[MAX];

int structsort(stu a,stu b){
  return (a.age<b.age || a.age==b.age&&strcmp(a.name,b.name)<0) ? 1:0;
}

void mergesort(stu *a,int left,int right){
  if (right==left) return;
  int middle=(left+right)/2;
  mergesort(a,left,middle);
  mergesort(a,middle+1,right);
  int i=left,j=left,k=middle+1;
  while(j<=middle&&k<=right)
    t[i++]=(structsort(a[j],a[k]))?a[j++]:a[k++];
  while(i<=right)
    t[i++]=(j>middle)?a[k++]:a[j++];
  for(i=left;i<=right;i++){
    a[i]=t[i];
  }
  return;
}

int main(){
  stu a[MAX];
  int i;
  for(i=0;i<n;i++){
    scanf("%d",&a[i].age);
    scanf("%s",a[i].name);
 }
 mergesort(a,0,n-1);
 for(i=0;i<=n-1;i++){
    printf("%d ",t[i].age);
    printf("%s\n",t[i].name);
  }
}
