#include<cstdio>
#include<vector>
#include<queue>
#define max 1005
using namespace std;

vector<int> G[max];
void bfs(int src,int dis)
{
    queue < int > Q;
    int color[max]= {0},dist[max]= {0};
    Q.push(src);
    dist[src]=0;
    color[src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    if(dist[dis])
        printf("Yes, visiting %d other holes.\n",dist[dis]-1);
    else
        printf("No.\n");
}
struct no
{
    double x,y;
} cor[max];

int main()
{
    int i,j,v,m;
    char line[50];
    double dis,min;
    while(scanf("%d %d",&v,&m)==2 && (v||m))
    {
        for(i=0; i<=max; i++)
            G[i].clear();
        min=v*v*m*m*3600.0;
        getchar();
        m=0;
        while(1)
        {   gets(line);
            j=sscanf(line,"%lf %lf",&cor[m].x,&cor[m].y);
            m++;
            if(j==-1)
                break;
        }
        m--;

        for(i=0; i<m-1; i++)
            for(j=i+1; j<m; j++)
            {
                dis=(cor[i].x-cor[j].x)*(cor[i].x-cor[j].x)+(cor[i].y-cor[j].y)*(cor[i].y-cor[j].y);
                if(dis<=min)
                {
                    G[i].push_back(j);
                    G[j].push_back(i);
                }
            }
        bfs(0,1);
    }
    return 0;
}
