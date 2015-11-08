#include <cstdio>
#include <cmath>
using namespace std;

typedef long long int64;

int N;

int64 sq(int64 x) {
    return x*x;
}

int64 solve() {
    if(N <= 0) {
        return 0;
    }
    int64 ans = 0;
    for(int i=1, st=sqrt(N); i<=st; i++) {
        ans += N / i;
    }
    ans = 2*ans - sq((int)sqrt(N));
    return ans;
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        printf("%lld\n", solve());
    }

    return 0;
}
