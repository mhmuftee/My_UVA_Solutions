#include<cstdio>
#include<vector>
#include<stack>
using namespace std;

vector <int>G[101];
void dfs(int node)
{
    int j,k,u,v,src,max=0,co;
    stack <int> S;
    for(src=1; src<=node; src++)
    {
        int vis[101] = {0};
        vis[src]=1;
        co=0;
        S.push(src);
        while(!S.empty())
        {
            u=S.top();
            for(j=0; j<G[u].size();)
            {
                v=G[u][j];
                if(vis[v]==0)
                {
                    vis[v]=1;
                    u=v;
                    co++;
                    S.push(v);
                    j=0;
                }
                else
                    j++;
            }
            S.pop();
        }
        if(co>max)
        {
            max=co;
            k=src;
        }
    }
    printf("%d\n",k);
}
int main()
{
    int i,j,k,node,T,n;

    while(scanf("%d",&node)==1 && node)
    {
        for(i=0; i<=100; i++)
            G[i].clear();
        for(k=1; k<=node; k++)
        {
            scanf("%d",&T);
            for(i=1; i<=T; i++)
            {
                scanf("%d",&n);
                G[k].push_back(n);
            }
        }
        dfs(node);
    }
    return 0;
}
