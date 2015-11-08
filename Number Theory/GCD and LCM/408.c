#include<stdio.h>
long GCD(long a,long b) {
    if (a%b==0) return b;
    else return GCD(b,a%b);
}
int main() {
    long int a,b,c;
    while(scanf("%lu %lu",&a,&b)==2)
    {
        c=0;

        c=GCD(a,b);
        printf("%10lu%10lu",a,b);
        if(c==1)
            printf("    Good Choice\n\n");
        else
            printf("    Bad Choice\n\n");
    }
    return 0;
}

