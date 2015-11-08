#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

typedef pair<int ,int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;

vector <vii> AdjList;
vi dfs_num,dis;

void dfs(int u)
{
    dfs_num[u]=1;
    for(int i=0; i<(int)AdjList[u].size(); i++)
    {
        int v =AdjList[u][i].first;
        if(dfs_num[v]==0)
        {
            dis[v]=dis[u]+AdjList[u][i].second;
            dfs(v);
        }
    }
}
int main()
{
    char s[1000];
    int u,v,w,node=0;
    AdjList.assign(10010,vii());
    dfs_num.assign(10010, 0);
    dis.assign(10010, 0);
    while(gets(s))
    {
        if(s[0]=='\0')
        {
            dis[1]=0;
            dfs(1);
            int Max=0,index=1;
            for(int i=1; i<=node; i++)
                if(dis[i]>Max)
                {
                    Max=dis[i];
                    index=i;
                }

            dfs_num.assign(10010, 0);
            dis.assign(10010, 0);
            dis[index]=0;
            dfs(index);

            Max=0;
            for(int i=1; i<=node; i++)
                if(dis[i]>Max)
                {
                    Max=dis[i];
                    index=i;
                }
            printf("%d\n",Max);

            node=0;
            AdjList.assign(10010,vii());
            dfs_num.assign(10010, 0);
            dis.assign(10010, 0);
        }

        else {
            sscanf(s,"%d %d %d",&u,&v,&w);
            AdjList[u].push_back(make_pair(v,w));
            AdjList[v].push_back(make_pair(u,w));
            node=max(u,v);
        }
    }

    dis[1]=0;
    dfs(1);
    int Max=0, index;
    for(int i=1; i<=node; i++)
        if(dis[i]>Max)
        {
            Max=dis[i];
            index=i;
        }

    dfs_num.assign(10010, 0);
    dis.assign(10010, 0);
    dis[index]=0;
    dfs(index);

    Max=0;
    for(int i=1; i<=node; i++)
        if(dis[i]>Max)
        {
            Max=dis[i];
            index=i;
        }
    printf("%d\n",Max);
    return 0;
}
