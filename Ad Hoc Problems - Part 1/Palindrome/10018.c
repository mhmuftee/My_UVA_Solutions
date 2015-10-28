#include<stdio.h>
long int  reverse(long int a);
int main() {
    long int a,b,c,i,j=0;
    scanf("%lu",&c);
    for(i=0; i<c; i++) {
        j=0;
        scanf("%lu",&a);
        while(1) {
            b=reverse(a);
            if(b==a)break;
            else
                a=a+b;
            j++;
        }
        printf("%lu %lu\n",j,b);
    }
    return 0;
}

long int reverse(long int a) {
    long int b;
    b=0;
    while(1) {
        b=b*10+a%10;
        if(a<10)break;
        a=a/10;
    }
    return b;
}
