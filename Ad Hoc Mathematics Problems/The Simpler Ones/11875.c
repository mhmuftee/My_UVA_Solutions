#include<stdio.h>
int main()
{
    int i,j,m,n,c,b=0,a[50];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&c);
        for(j=1; j<=c; j++)
            scanf("%d",&a[j]);
        b=(c/2);
        b=b+1;
        printf("Case %d: %d\n",i,a[b]);
    }
    return 0;
}
