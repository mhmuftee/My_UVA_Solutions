#include<stdio.h>

int main()
{
    int a[12][12];
    int i,j,k,n,m,s,o,count=1;

    while(scanf("%d",&n)==1 && n)
    {
        if(n%2==0)
            o=n/2;
        else
            o=n/2;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                scanf("%d",&a[i][j]);

        m=n;
        s=0;
        printf("Case %d:",count);
        for(k=1; k<=o; k++,m--)
        {   s=0;
            for(j=k; j<=m; j++)
                s=s+a[k][j]+a[m][j];

            for(i=k+1; i<=m-1; i++)
                s=s+a[i][k]+a[i][m];
            printf(" %d",s);
        }
        if(n%2!=0)
            printf(" %d\n",a[o+1][o+1]);
        else
            printf("\n");
        count++;
    }
    return 0;
}
