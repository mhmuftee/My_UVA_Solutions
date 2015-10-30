#include<stdio.h>
int main()
{
    int i,j,kase,k,n,m,s=0;
    int Hartal[365000],b[112222];
    for(i=0; i<=3650; i++)
    {
        Hartal[i]=0;
    }
    scanf("%d",&kase);
    for(k=0; k<kase; k++)
    {
        scanf("%d %d",&n,&m);
        {
            s=0;
            for(i=0; i<=n; i++)
                Hartal[i]=0;
            for(i=0; i<m; i++)
                scanf("%d",&b[i]);
            for(i=0; i<m; i++)
                for(j=0; j<=n; j=j+b[i])
                {
                    Hartal[j]=1;
                }
            for(i=7; i<=n; i+=7)
                Hartal[i]=0;
            for(i=6; i<=n; i+=7)
                Hartal[i]=0;
            for(i=1; i<=n; i++)if(Hartal[i]!=0)
                {
                    s=s+Hartal[i];
                }
            printf("%d\n",s);
        }
    }
    return 0;
}
