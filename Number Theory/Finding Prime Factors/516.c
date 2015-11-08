#include<stdio.h>
#include<math.h>

int prime[33000];

void prime_base(int n) {
    int i;
    for(i=2; i<=181; i++)prime[i]=0;
    for(i=2; i<=sqrt(n);)
    {
        if(n%i==0) {
            prime[i]++;
            n=n/i;
        }
        if(n%i!=0)i++;
    }
    prime[n]++;
    printf("%d %d",n,prime[n]);
    prime[n]=0;
    for(i=n; i>=2; i--)
        if(prime[i]!=0) {
            printf(" %d %d",i,prime[i]);
        }
    printf("\n");
}

int main() {
    char ch,c;
    unsigned int i,n,p,s=1;
    while(scanf("%u",&n)==1)

    {   if(n==0)break;
        scanf("%u%c",&p,&ch);
        s=s*pow(n,p);
        if(ch=='\n') {
            prime_base(s-1);/*printf("%d\n",s);*/
            s=1;
        }
    }
    return 0;
}

