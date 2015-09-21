#include<stdio.h>
int main (){
int i,j,t,k,n,a[10];
scanf("%d",&n);
for(k=1;k<=n;k++){

for(i=0;i<3;i++)
scanf("%d",&a[i]);

for(i=0;i<2;i++)
  for(j=i+1;j<3;j++)

    if(a[j]<a[i]){
      t=a[i];
      a[i]=a[j];
      a[j]=t;
      }
      printf("Case %d: %d\n",k,a[1]);}
return 0;}
