#include<stdio.h>

int main(){

    int a[23];
    int i,j,n,m,cas,t;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        m=0;
        for(i=1;i<n;i++)
        m=m+a[i]-a[i-1];

        printf("%d\n",m*2);
    }
    return 0;}
