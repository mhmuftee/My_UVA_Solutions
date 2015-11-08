#include<stdio.h>
int main()
{
    int l,i,j,n;
    long long int p,q,r;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        scanf("%d",&l);
        p=1;
        q=1;
        for(i=1; i<=l; i++)
        {
            r=p+q;
            p=q;
            q=r;
        }
        printf("Scenario #%d:\n%lld\n\n",j,r);
    }
    return 0;
}
