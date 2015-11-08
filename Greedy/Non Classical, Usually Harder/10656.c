#include<stdio.h>
int main() {
    long n;
    long l,i,a[100000],j,k=0,cas;

    while(scanf("%lu",&n)==1) {
        if(n==0)break;
        i=0;
        for(l=0; l<n; l++)
            a[l]=0;
        while(n--)
        {   scanf("%ld",&j);
            if(j!=0)
            {
                a[i]=j;
                i++;
            }
        }
        cas=0;
        for(k=0; k<i; k++)
            if(a[k]==0)cas=1;
        if(cas==1)printf("0");
        else {
            printf("%ld",a[0]);
            for(k=1; k<i; k++)
                printf(" %ld",a[k]);
        }
        printf("\n");
    }
    return 0;
}
