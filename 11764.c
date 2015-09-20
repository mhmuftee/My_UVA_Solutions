#include<stdio.h>
int main(){

int i=0,j,k,n,a[50],s;

  scanf("%d",&s);
  for(i=0;i<s;i++){
    j=0;k=0;
  scanf("%d",a[i]);

  if(a[i]>a[i+1])
    j++;
  else
    k++;
  
  printf("Case %d:%d %d",s,j,k);}
  return 0;
}
