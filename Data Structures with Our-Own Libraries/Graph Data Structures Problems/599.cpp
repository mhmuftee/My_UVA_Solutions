#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<cstring>
using namespace std;

vector < int > Graph[400];
int bfs(int n)
{
    int i,j,co=0,color[405]= {0},u,v;
    queue < int > Q;
    for(i=1; i<=n; i++)
    {
        if(!color[i])
        {
            co++;
            Q.push(i);
            color[i]=1;
        }
        while(!Q.empty())
        {
            u=Q.front();
            int b=Graph[u].size();
            for( j=0; j<b; j++)
            {
                v=Graph[u][j];
                if(!color[v])
                {
                    color[v]=1;
                    Q.push(v);
                }
            }
            Q.pop();
        }
    }
    return co;
}
int main()
{
    map<char,int>index;
    int i,j,k,node,edge,cas;
    char s[100];
    scanf("%d",&cas);
    while(cas--)
    {
        index.clear();
        for(i=0; i<405; i++)
            Graph[i].clear();
        int bb=1;
        while(1)
        {
            scanf("%s",s);
            char a,b,c;
            if(s[0]=='*')
                break;
            sscanf(s,"(%c,%c)",&a,&b);
            if(!index[a])
                index[a]=bb++;
            if(!index[b])
                index[b]=bb++;
            Graph[index[a]].push_back(index[b]);
            Graph[index[b]].push_back(index[a]);

        }
        scanf("%s",s);
        int len=strlen(s);
        for(i=0; i<len; i++)
            if(s[i]>='A' && s[i]<='Z')
            {
                if(!index[s[i]])
                    index[s[i]]=bb++;
            }
        node=--bb;
        int acorn=0;
        for(i=1; i<=node; i++)
        {
            len=Graph[i].size();
            if(!len)
                acorn++;
        }
        int tree=bfs(node);

        printf("There are %d tree(s) and %d acorn(s).\n",tree-acorn,acorn);
    }

    return 0;
}

