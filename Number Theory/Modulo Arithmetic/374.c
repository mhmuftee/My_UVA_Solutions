#include<stdio.h>
long square(long s) {
    return s*s;
}
long bigmod(long b, long p, long m) {
    if (p == 0)
        return 1;
    else if (p%2 == 0)
        return square( bigmod (b,p/2,m)) % m;
    else
        return ((b % m) * bigmod( b,p-1,m)) % m;
}
int main() {
    unsigned long b,p,m,sum;
    while(scanf("%lu%lu%lu",& b,& p,& m)==3) {
        sum = bigmod( b, p, m);
        printf("%lu\n", sum);
    }
    return 0;
}
