#include <stdio.h>
int main() {
    unsigned long long n;
    while(scanf("%llu",&n)!=EOF) {
        n = (n+1)/2;
        n = n*n;
        n = 2*n-1;
        n = 3*n-6;
        printf("%llu\n",n);
    }
    return 0;
}
