#include<stdio.h>
#include<math.h>
int main()
{
    int u,v,i,j,k,n,nn,p,q,s[100];
    scanf("%d",&nn);
    for(i=1; i<=nn; i++)
    {
        scanf("%d%d%d",&n,&p,&q);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&s[j]);
        }

        for(j=1; j<n; j++)
            for(k=j+1; k<=n; k++)
                if(s[j]>s[k])
                    s[k]^=s[j]^=s[k]^=s[j];


        u=0;
        v=0;
        for(j=1; j<=n; j++)
        {
            u+=s[j];
            if(u>q)break;
            v++;
        }
        if(v>p)printf("Case %d: %d\n",i,p);
        else printf("Case %d: %d\n",i,v);
    }
    return 0;
}
