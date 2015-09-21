#include<stdio.h>
int main(){
int i,a,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a);
a=(((a*567)/9+7492)*235)/47-498;
a=a/10;
a=a%10;
if(a<0)
a=-a;
printf("%d\n",a);

}

return 0;}
