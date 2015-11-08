#include<cstdio>
#include<vector>
#include<string>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
vector<int>G[105];
int dfs_num[105],Arp[105],dfs_low[105],dfsnumcounter,dfs_parent[105],apoint,root,rchild;
string ss[105];

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
    int node,edge,u,v,cas=0;
    while(scanf("%d",&node)==1 && node)
    {
        for(int i=0; i<=100; i++)
            G[i].clear(),dfs_low[i]=0,dfs_num[i]=-1,dfs_parent[i]=-1,Arp[i]=0;

        map<string,int>index;

        dfsnumcounter=0;
        apoint=0;
        string s;
        for(int i=1; i<=node; i++)
        {   cin>>s;
            index[s]=i;
            ss[i]=s;
        }

        scanf("%d",&edge);
        string a;
        for(int i=0; i<edge; i++)
        {
            cin>>s>>a;
            u=index[s];
            v=index[a];
            G[u].push_back(v);
            G[v].push_back(u);
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
        vector<string>vs;
        for(int i=1; i<=node; i++)
        {
            if(Arp[i])
                vs.push_back(ss[i]);
        }

        if(cas)
            printf("\n");
        printf("City map #%d: %d camera(s) found\n",++cas,vs.size());

        if(vs.size())
        {
            sort(vs.begin(),vs.end());

            for(int i=0; i<vs.size(); i++)
                cout<<vs[i]<<endl;
        }
    }

    return 0;
}
