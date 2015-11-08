#include<stdio.h>
int main() {
    int a,b,n;
    while(scanf("%u %u",&a,&b)!=EOF) {
        n=a;

        while(1) {
            if(a<b) break;
            n=n+a/b;
            a=a/b+a%b;
        }
        printf("%u\n",n);
    }
    return 0;
}
