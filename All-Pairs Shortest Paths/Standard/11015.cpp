#include<cstdio>
using namespace std;

int main()
{
    int i,j,k,m,n,a,b,c,dis[23][23],cases=1;
    char aa[23][23];
    while(scanf("%d",&m)==1 && m)
    {
        scanf("%d",&n);
        for(i=1; i<=m; i++)
            scanf("%s",aa[i]);
        for(i=1; i<=m; i++)
            for(j=1; j<=m; j++)
                dis[i][j]=99999999;
        for(i=0; i<n; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            dis[a][b]=dis[b][a]=c;
        }

        for(k=1; k<=m; k++)
            for(i=1; i<=m; i++)
                for(j=1; j<=m; j++)
                    if(dis[i][j]>dis[i][k]+dis[k][j])
                        dis[i][j]=dis[i][k]+dis[k][j];

        for(i=1; i<=m; i++)
            dis[i][i]=0;
        int s=0,k=1,min=225000;

        for(i=1; i<=m; i++)
        {
            s=0;
            for(j=1; j<=m; j++)
                s+=dis[i][j];
            if(min>s)
            {
                min=s;
                k=i;
            }
        }
        printf("Case #%d : %s\n",cases,aa[k]);
        cases++;
    }
    return 0;
}
