#include<cstdio>
#include<queue>
using namespace std;
char s[105][105];
int save[105][105];

struct axis
{
    int x,y;
} ax[10025];

int bfs(int src,int des,int m,int n)
{
    queue < int > Q;
    int color[10025]= {0},dist[10025]= {0};
    Q.push(src);
    dist[src]=0;
    color[src]=1;
    int i,j;
    while(!Q.empty())
    {
        int u=Q.front();
        i=ax[u].x;
        j=ax[u].y;
        if(s[i][j+1]=='.')
        {
            int v=save[i][j+1];

            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i][j-1]=='.')
        {
            int v=save[i][j-1];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i-1][j]=='.')
        {
            int v=save[i-1][j];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i+1][j]=='.')
        {
            int v=save[i+1][j];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i-1][j+1]=='.')
        {
            int v=save[i-1][j+1];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i-1][j-1]=='.')
        {
            int v=save[i-1][j-1];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i+1][j-1]=='.')
        {
            int v=save[i+1][j-1];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i+1][j+1]=='.')
        {
            int v=save[i+1][j+1];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    return dist[des];
}
int main()
{
    int i,j,k,m,n,cas,src,des,starti,startj,endi,endj;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d %d",&m,&n);
        getchar();
        for(i=0; i<=m+1; i++)
            for(j=0; j<=n+1; j++)
                s[i][j]='Q';
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
                scanf("%c",&s[i][j]);
            getchar();
        }
        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
                save[i][j]=(i)*n+j,ax[save[i][j]].x=i,ax[save[i][j]].y=j;
        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
            {
                if(s[i][j]=='Z')
                {
                    if(s[i+2][j+1]=='.')
                        s[i+2][j+1]='Q';

                    if(s[i+2][j-1]=='.')
                        s[i+2][j-1]='Q';

                    if(s[i-2][j+1]=='.')
                        s[i-2][j+1]='Q';

                    if(s[i-2][j-1]=='.')
                        s[i-2][j-1]='Q';

                    if(s[i-1][j+2]=='.')
                        s[i-1][j+2]='Q';

                    if(s[i+1][j+2]=='.')
                        s[i+1][j+2]='Q';

                    if(s[i-1][j-2]=='.')
                        s[i-1][j-2]='Q';

                    if(s[i+1][j-2]=='.')
                        s[i+1][j-2]='Q';
                }
                if(s[i][j]=='A')
                {
                    src=save[i][j];
                }
                if(s[i][j]=='B')
                {
                    des=save[i][j];
                    endi=i;
                    endj=j;
                }
            }
        s[endi][endj]='.';
        int dis=bfs(src,des,0,save[m][n]);
        if(dis)
            printf("Minimal possible length of a trip is %d\n",dis);
        else
            printf("King Peter, you can't go now!\n");
    }
    return 0;
}
