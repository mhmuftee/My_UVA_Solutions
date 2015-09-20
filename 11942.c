#include<stdio.h>

int main(){
int cas,a[11],i,k,big,less;
for(i=0;i<10;i++)a[i]=0;

scanf("%d",&cas);
printf("Lumberjacks:\n");
for(k=0;k<cas;k++)
{  big=0;less=0;
    for(i=0;i<10;i++)
   {scanf("%d",&a[i]);
   }
    for(i=0;i<9;i++)
    if(a[i]<=a[i+1]){
    big++;}
    else
    if(a[i]>=a[i+1])
    less++;
    if(big==9 || less==9)
    printf("Ordered\n");
    else
    printf("Unordered\n");
}
return 0;}
