#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>

using namespace std;
vector < int > Graph[205];
map<string,int> index;
int bfs(int src,int dis)
{
    queue < int > Q;
    int color[205]= {0},dist[205];
    Q.push(src);
    dist[src]=0;
    color[src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<Graph[u].size(); i++)
        {
            int v=Graph[u][i];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }

        }
        Q.pop();
    }

    return dist[dis];
}
int main()
{
    int x,y,a,b,i,j,k,n,e=0,cas;
    scanf("%d",&cas);
    while(cas--)
    {
        n=0;
        for(i=1; i<=200; i++)
            Graph[i].clear();
        string s,u,v;
        vector<string>ss;
        ss.push_back("a");
        index.clear();
        while(cin>>s && s[0]!='*')
        {
            ss.push_back(s);
            if(!index[s])
                index[s]=++n;
        }

        getchar();

        for(i=1; i<ss.size(); i++)
            for(j=i+1; j<ss.size(); j++)
            {
                if(i!=j)
                {
                    int c=0;
                    u=ss[i];
                    v=ss[j];
                    for(k=0; k<u.size(); k++)
                        if(u[k]!=v[k])
                            c++;
                    if(c==1)
                    {
                        Graph[i].push_back(j);
                        Graph[j].push_back(i);
                    }
                }
            }
        if(e)cout<<endl;
        while(getline(cin,s))
        {
            if(s=="")
                break;
            u.clear();
            for(int i=0; i<s.size(); i++)
                if(s[i]==' ')
                {
                    x=index[u];
                    u.clear();
                }
                else
                    u.push_back(s[i]);
            y=index[u];

            cout<<s<<" "<<bfs(x,y)<<endl;
        }
        e=1;
    }
    return 0;
}
