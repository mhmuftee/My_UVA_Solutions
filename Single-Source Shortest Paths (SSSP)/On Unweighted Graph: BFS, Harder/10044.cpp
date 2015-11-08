#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<sstream>
#define sp pair <string,string>
#define max 10010
using namespace std;

int node,dist[max+1];

vector<int> Graph[10010];
void bfs(int src)
{
    queue < int > Q;
    int color[max+1]= {0};
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


}
int main()
{

    int book,name,cas;

    scanf("%d",&cas);

    for(int ks=1; ks<=cas; ks++)
    {

        map<sp,int> ind;

        for(int i=0; i<max; i++)
            Graph[i].clear();

        ind[make_pair("Erdos,","P.")]=1;

        node=2;

        scanf("%d %d",&book,&name);
        getchar();
        for(int i=0; i<book; i++)
        {
            string s;
            getline(cin,s);

            string inp = s.substr(0,s.find(":")+1);

            stringstream ss (inp);
            string a,b ;
            vector<sp> c;

            while(ss>>a>>b)
            {
                b.erase(b.size()-1);
                c.push_back(make_pair(a,b));
            }

            for(int j=0; j<c.size(); j++)
            {
                if(!ind[c[j]])
                    ind[c[j]]=node++;
            }

            for(int j=0; j<c.size()-1; j++)
                for(int k=j+1; k<c.size(); k++)
                {
                    int m,n;
                    m=ind[c[j]];
                    n=ind[c[k]];
                    Graph[m].push_back(n);
                    Graph[n].push_back(m);
                }
        }
        memset(dist,-1,sizeof(dist));

        bfs(1);

        printf("Scenario %d\n",ks);

        for(int i=0; i<name; i++)
        {
            string a,b;
            cin>>a>>b;
            if(dist[ind[make_pair(a,b)]]==-1)
                cout<<a<<" "<<b<<" infinity"<<endl;
            else
                cout<<a<<" "<<b<<" "<<dist[ind[make_pair(a,b)]]<<endl;
        }
    }
    return 0;
}
