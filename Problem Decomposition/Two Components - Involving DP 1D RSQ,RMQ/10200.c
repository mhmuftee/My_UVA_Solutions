#include<stdio.h>
#include<math.h>
#define max 100000000

char ptp[10000];

int prime(long long int a)
{
    long int i,flag=0;
    for(i=2; i<=sqrt(a); i++)
        if(a%i==0)
        {
            flag=1;
            break;
        }
    if(flag==1) return 0;
    else return 1;
}

int main() {

    long long int i,x,a,b,c;
    double y,n,j;
    for(i=0; i<=10000; i++) {
        x=i*i+i+41;
        if(prime(x)==1)ptp[i]=1;
    }
    while(scanf("%lld %lld",&a,&b)!=EOF) {
        n=b-a+1;
        j=0;

        for(i=a; i<=b; i++)
        {
            if(ptp[i]==1)j++;
        }

        y=(j/n)*100;

        printf("%.2lf\n",y+1e-8);
    }
    return 0;
}
