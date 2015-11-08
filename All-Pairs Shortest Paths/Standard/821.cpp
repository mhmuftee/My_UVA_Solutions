#include<cstdio>
#define inf 999
#define max 102
using namespace std;

int main()
{
    int i,j,k,a,b,m,n,dis[max][max],cases=1;
    while(scanf("%d %d",&m,&n)==2 && m && n)
    {
        for(i=1; i<max; i++)
            for(j=1; j<max; j++)
                dis[i][j]=inf;

        dis[m][n]=1;

        while(scanf("%d %d",&a,&b)==2 && a && b)
        {
            dis[a][b]=1;
        }

        for(k=1; k<max; k++)
            for(i=1; i<max; i++)
                for(j=1; j<max; j++)
                    if(dis[i][j]>dis[i][k]+dis[k][j])
                        dis[i][j]=dis[i][k]+dis[k][j];

        for(i=1; i<max; i++)
            dis[i][i]=999;

        int cou=0,s=0;
        for(i=1; i<max; i++)
            for(j=1; j<max; j++)
                if(dis[i][j]!=999)
                {
                    cou++;
                    s+=dis[i][j];
                }
        double f;
        f=s/(double)cou;
        printf("Case %d: average length between pages = %.3lf clicks\n",cases++,f);
    }
    return 0;
}
