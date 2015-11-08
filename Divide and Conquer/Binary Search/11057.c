#include<stdio.h>
int main() {
    long int a[10000],fag,b,c,d,n,m,i,j,t,diff,e,min,max;

    while(scanf("%lu",&n)!=EOF) {
        e=1000001;
        c=0;
        d=0;
        diff=0;
        fag=0;
        for(i=0; i<n; i++)
            scanf("%lu",&a[i]);
        scanf("%lu",&b);
        diff=b;

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(a[i]+a[j]==b) {
                    m=i;
                    if(i!=j) {
                        if(a[i]<=a[j]) {
                            c=a[i];
                            d=a[j];
                        }
                        else {
                            d=a[i];
                            c=a[j];
                        }
                        diff=d-c;
                        if(diff<=e)
                        {
                            e=diff;
                            min=c;
                            max=d;
                            break;
                        }

                    }
                    break;
                }
        printf("Peter should buy books whose prices are %lu and %lu.\n\n",min,max);
    }

    return 0;
}
