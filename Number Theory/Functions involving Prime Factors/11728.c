#include<stdio.h>
int prime(int n) {
    int i;
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n%2 == 0) return 0;
    for ( i=3; i*i<=n; i+=2)
        if (n%i == 0)
            return 0;
    return 1;
}
int main() {
    int i,n,a,b,cas=0;
    while(scanf("%u",&n)==1)

    {   if(n==0) break;
        printf("Case %d: ",cas+1);
        if(n==1) printf("1\n");
        else {
            n=n-1;
            i=prime(n);
            if(i==1)
                printf("%u\n",n);
            else
                printf("-1\n");
        }
        cas++;
    }
    return 0;
}
