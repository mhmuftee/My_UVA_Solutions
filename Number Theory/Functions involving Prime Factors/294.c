#include<stdio.h>
#include<math.h>

long int prime_base(long int n) {
    long long int i,l,s=1,max=0,min=0,count=0;
    if(n==1) {
        s=1,count=1;
    }
    else
    {
        for(i=2; i<=sqrt(n);)
        {
            if(n%i==0) {
                max++;
                n=n/i;
                l=n;
                min=max;
                count=1;
            }
            if(n%i!=0) {
                i++;
                s=s*(max+1);
                max=0;
                min=0;
            }

            if(n==l)min++;
        }
        s=s*(min+1);
    }

    if(count==0)return 2;
    return s;
}
int main() {
    char ch,c;
    unsigned long long int i,j,k,n,m,p,s=1,max=0;

    scanf("%llu",&s);
    for(i=0; i<s; i++) {
        max=0;
        scanf("%llu %llu",&n,&p);
        if(n==p)
        {
            max=prime_base(n);
            k=n;
        }
        else {
            if(n%2==0)
                for(j=n; j<=p; j+=2)
                {   m=prime_base(j);
                    if(m>max) {
                        max=m;
                        k=j;
                    }
                }
            else
                for(j=n+1; j<=p; j+=2)
                {   m=prime_base(j);
                    if(m>max) {
                        max=m;
                        k=j;
                    }
                }
        }
        printf("Between %llu and %llu, %llu has a maximum of %llu divisors.\n",n,p,k,max);
    }
    return 0;
}


