#include<stdio.h>
int main() {
    unsigned long long  n;
    while(scanf("%llu",&n)!=EOF)
    {   if(n==0)break;

        n=(n*10)/9;

        if(n%10==0) {
            printf("%llu %llu\n",n-1,n);
        }
        else
            printf("%llu\n",n);
    }
    return 0;
}
