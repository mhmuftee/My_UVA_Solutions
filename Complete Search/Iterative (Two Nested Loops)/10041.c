#include<stdio.h>
int main()
{
    int i,j,k,m,n,s,a[500],t,d,b;
    scanf("%d",&m);
    for(k=0; k<m; k++)
    {
        d=0;
        s=0;
        b=0;
        scanf("%d",&n);
        b=n/2;
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
        for(i=1; i<n; i++)
            for(j=i+1; j<=n; j++)
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }

        if(n%2==0)
            b=b;
        else
            b=b+1;

        for(i=1; i<=n; i++)
        {
            d=a[b]-a[i];
            if(d<0)
                d=-d;
            s=s+d;
        }
        printf("%d\n",s);
    }
    return 0;
}
