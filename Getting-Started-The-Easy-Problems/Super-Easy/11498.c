#include<stdio.h>

int main(){

int i,n,m,j,a,b,c,d;
while(scanf("%d",&j)==1)
{

if(j==0)break;
scanf("%d %d",&n,&m);
for(i=0;i<j;i++)
{
    scanf("%d %d",&a,&b);
a=a-n;b=b-m;
if(a==0 ||b==0)printf("divisa\n");
if(a<0 && b>0)printf("NO\n");
if(a>0 && b>0)printf("NE\n");
if(a>0 && b<0)printf("SE\n");
if(a<0 && b<0)printf("SO\n");
}}
return 0;}
