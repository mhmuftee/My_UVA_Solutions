#include<stdio.h>
int main() {
    long long int l,i,j,n;
    long long int p,q,r;
    while(scanf("%llu",&l)!=EOF) {
        if(l<0) break;
        p=0;
        q=1;
        for(i=1; i<=l; i++) {
            r=p+q+1;
            p=q;
            q=r;
        }
        printf("%llu %llu\n",p,q);
    }
    return 0;
}
