#include<stdio.h>
#include<math.h>
int main() {
    unsigned long long int n,T;
    scanf("%llu",&T);
    while(T--)
    {
        scanf("%llu",&n);
        n=(sqrt(8*n+1)-1)/2;
        printf("%llu\n",n);
    }
    return 0;
}
