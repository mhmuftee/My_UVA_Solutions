#include<stdio.h>

int main() {
    long n;

    while(scanf("%ld",&n)==1 && n)
    {
        n=n*(n+1)*(2*n+1)/6;
        printf("%ld\n",n);
    }
    return 0;
}
