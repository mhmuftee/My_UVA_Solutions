#include<cstdio>
#include<vector>
using namespace std;
int n,m,count;
vector<int>G[30005];
bool status [30005];

void dfs(int u)
{
    if(status[u])
        return ;
    else
        status[u]=true,count++;
    int len=G[u].size();
    for(int i=0; i<len; i++)
        dfs(G[u][i]);
}

int main()
{
    int i,j,u,v,cas;
    while(scanf("%d %d",&n,&m)==2 && (n || m))
    {
        for(i=0; i<=30000; i++)
            G[i].clear(),status[i]=false;

        for(i=0; i<m; i++)
        {
            scanf("%d",&cas);
            scanf("%d",&u);
            for(j=2; j<=cas; j++)
            {
                scanf("%d",&v);
                G[u].push_back(v);
                G[v].push_back(u);
            }
        }
        count=0;
        dfs(0);
        printf("%d\n",count);
    }

    return 0;
}
