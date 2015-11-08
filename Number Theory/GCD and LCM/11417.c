#include<stdio.h>

long GCD(long a,long b) {
    if (a%b==0) return b;
    else return GCD(b,a%b);
}

int main() {
    long int i,n,G,j;
    while(scanf("%lu",&n)!=EOF) {
        G=0;
        if(n==0) break;

        for(i=1; i<n; i++)
            for(j=i+1; j<=n; j++)
            {
                G+=GCD(i,j);
            }
        printf("%lu\n",G);
    }
    return 0;
}
