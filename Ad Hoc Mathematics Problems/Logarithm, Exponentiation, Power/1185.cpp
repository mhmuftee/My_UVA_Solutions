#include<stdio.h>
#include<math.h>
#define max 10000000
int DP[max+5];

int main() {
    double sum=0;
    int  a,i,n,cas;
    for(i=1; i<=max; i++) {
        sum+=log10(i);
        DP[i]=(int)sum;
    }
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&n);
        printf("%d\n",DP[n]+1);
    }
    return 0;
}
