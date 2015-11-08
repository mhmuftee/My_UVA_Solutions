#include<cstdio>
#include<vector>
#include<string>
#include<sstream>
#include<iostream>
#include<algorithm>
using namespace std;

vector<int>G[105];
int dfs_num[105],Arp[105],dfs_low[105],dfsnumcounter,dfs_parent[105],apoint,root,rchild;

void Apoint(int u)
{
    dfs_low[u]=dfs_num[u]=dfsnumcounter++;

    for(int j=0; j<G[u].size(); j++)
    {
        int v=G[u][j];

        if(dfs_num[v]==-1)
        {
            dfs_parent[v]=u;
            if(u==root)rchild++;
            Apoint(v);

            if(dfs_low[v]>=dfs_num[u])
                Arp[u]=1;

            dfs_low[u]=min(dfs_low[u],dfs_low[v]);
        }
        else if(v!=dfs_parent[u])
            dfs_low[u]=min(dfs_low[u],dfs_num[v]);
    }
}

int main()
{
    int node,u,v;
    while(scanf("%d",&node)==1 && node)
    {
        for(int i=0; i<=100; i++)
            G[i].clear(),dfs_low[i]=0,dfs_num[i]=-1,dfs_parent[i]=-1,Arp[i]=0;
        dfsnumcounter=0;
        apoint=0;
        while(scanf("%d",&u)==1 && u)
        {
            string s;
            getline(cin,s);
            stringstream ss(s);
            while(ss>>v)
            {
                G[u].push_back(v);
                G[v].push_back(u);
            }
        }

        for(int i=1; i<=node; i++)
        {
            if(dfs_num[i]==-1)
            {
                root=i;
                rchild=0;
                Apoint(i);
                Arp[root]=(rchild>1);
            }
        }

        apoint=0;
        for(int i=1; i<=node; i++)
        {
            if(Arp[i])
                apoint++;
        }
        printf("%d\n",apoint);
    }
    return 0;
}
