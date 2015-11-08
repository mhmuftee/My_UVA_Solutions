#include<stdio.h>

int main() {
    int a[100];
    a[0]=1;
    a[1]=3;

    for(int i=1; i<=53; i+=2)
    {
        int n=a[i]-a[i-1];
        a[i+1]=a[i]+n+2;
        a[i+2]=a[i+1]+n+2;
    }

    int cas;
    scanf("%d",&cas);

    while(cas--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",a[n-1]);
    }

}
