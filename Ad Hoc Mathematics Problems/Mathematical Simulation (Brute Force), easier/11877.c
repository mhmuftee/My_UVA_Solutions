#include<stdio.h>
int main() {
    int i,n;
    while(scanf("%d",&n)!=EOF) {
        if(n==0)break;
        else
            i=n/2;
        printf("%d\n",i);
    }
    return 0;
}
