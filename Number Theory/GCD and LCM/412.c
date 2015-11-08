#include<stdio.h>
#include<math.h>
long GCD(long a,long b) {
    if (a%b==0) return b;
    else return GCD(b,a%b);
}

int main() {
    long int a[51],b[51];
    long int i,j,n,temp;
    long int g,pair,spair,mp,gp;
    double Pi;
    while(scanf("%ld",&n)==1)
    {   if(n==0)break;
        for(i=1; i<=n; i++)
        {   scanf("%ld",&temp);
            a[i]=b[i]=temp;
        }
        pair=0;
        spair=0;
        gp=0;
        mp=0;

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                if(i!=j)
                {   spair++;
                    g=GCD(a[i],b[j]);
                    if(g==1) {
                        pair++;
                    }
                }
            }

        mp=spair/2;
        gp=pair/2;
        if(gp==0)printf("No estimate for this data set.\n");
        else {
            Pi=(double)(6*mp)/(double)gp;
            Pi=sqrt(Pi);
            printf("%lf\n",Pi);
        }
    }
    return 0;
}
