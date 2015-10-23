#include<stdio.h>
#define max 1000000
int main() {
    long int i=0,j,kase,k,n,count=0,add;
    int a[max],b[max];


    scanf("%ld",&kase);
    for(k=0; k<kase; k++) {
        add=0;
        scanf("%ld",&n);

        for(j=0; j<n; j++)
            scanf("%d %d",&a[j],&b[j]);

        for(j=n-1; j>=0; j--)
        {
            add=add+a[j]+b[j];
            a[j]=add%10;
            add=add/10;

        }

        if(count!=0)printf("\n");


        for(j=0; j<n; j++)
            printf("%d",a[j]);

        printf("\n");
        count++;
    }
    return 0;
}
