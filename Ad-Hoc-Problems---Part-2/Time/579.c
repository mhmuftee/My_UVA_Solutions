#include<stdio.h>
int main(){
int H;
float q,M;
while(scanf("%d:%f",&H,&M)!=EOF)
{
{
    if(H==0 && M==0) break;
    q=(60*H-11*M)/2;
    if(q<0)q=-q;
    if(q>180)q=360-q;
    printf("%.3f\n",q);
}
}
return 0;
}
