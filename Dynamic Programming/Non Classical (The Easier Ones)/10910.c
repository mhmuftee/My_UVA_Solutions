#include<stdio.h>

int main() {
    long long int n,k,r,f,g,temp,a,b,c;
    int i,j,l,kase;
    scanf("%d",&kase);
    for(l=0; l<kase; l++) {
        scanf("%lld%lld%lld",&a,&b,&c);
        n=b-a*c+a-1;
        k=a-1;
        g=1;
        if(k>n/2) {
            k=n-k;
        }

        for(i=n,j=1; i>k,j<=k; i--,j++)
        {
            g*=i;
            g/=j;
        }
        printf("%lld\n",g);
    }
    return 0;
}
