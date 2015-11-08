#include<stdio.h>
long int n,s;
int main() {
    while(scanf("%lu",&n)!=EOF) {
        if(n<0)
            break;
        s=1+(n*(n+1))/2;
        printf("%lu\n",s);;

    }
    return 0;
}
