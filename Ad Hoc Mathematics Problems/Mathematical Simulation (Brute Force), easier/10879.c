#include<stdio.h>

int main()
{
    long long int i,j,n,m,p,q,a[10],y;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&m);
        q=0;
        y=0;
        for(j=2;; j++)
            if(m%j==0)
            {
                a[q]=j;
                a[q+1]=(m/j);
                q=2;
                y++;
                if(y==2)
                {
                    printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",i,m,a[0],a[1],a[2],a[3],a[4]);
                    break;
                }
            }
    }
    return 0;
}
