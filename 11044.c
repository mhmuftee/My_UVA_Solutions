#include<stdio.h>
int main(){

    long int i,a,b,c,m,n;
    scanf("%lu",&a);
    for(i=0;i<a;i++){
    scanf("%lu %lu",&n,&m);
    b=n/3;c=m/3;

    printf("%lu\n",b*c);
    }

return 0;}
