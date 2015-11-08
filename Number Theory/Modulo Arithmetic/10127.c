#include<stdio.h>

int main() {
    long one,N,input,k;
    while(scanf("%ld",&input)==1) {
        one=1;
        N=1;
        while(1) {
            if(N<input)
                N=N*10+1;
            one++;
            k=N%input;
            if(k==0)break;
            N=k;

        }
        printf("%ld\n",one);
    }
    return 0;
}
