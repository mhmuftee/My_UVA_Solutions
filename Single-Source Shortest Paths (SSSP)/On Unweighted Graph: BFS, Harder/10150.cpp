#include<iostream>
#include<cstdio>
#include<map>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#define max 26000
using namespace std;

vector<string>dic;
map<string,int>index;
string par[max];
vector<int> Graph[max];
int parent[26000],node;

bool cmp(string u,string v)
{
    if(u.size()<v.size())
        return true;
    return false;
}
int print(int u)
{
    if(parent[u]==0)return 0;
    print(parent[u]);
    int z=parent[u];
    cout<<par[z]<<endl;
}

void bfs(int src,int dis)
{

    queue < int > Q;
    int color[26000]= {0};

    for(int i=0; i<=node; i++)
        parent[i]=0;
    Q.push(src);
    color[src]=1;
    parent[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        int size=Graph[u].size();
        for(int i=0; i<size; i++)
        {
            int v=Graph[u][i];
            if(!color[v])
            {
                color[v]=1;
                parent[v]=u;
                Q.push(v);
            }
        }
        Q.pop();
    }

    if(parent[dis])
    {
        print(dis);
        cout<<par[dis]<<endl;
    }
    else
        cout<<"No solution."<<endl;
}

int main()
{
    int i,j,k,x,y,a,b,cas,newline;
    string u,v,s;
    node=0;
    while(getline(cin,s))
    {
        if(s=="")
            break;
        dic.push_back(s);
        index[s]=++node;
        par[node]=s;
    }
    sort(dic.begin(),dic.end(),cmp);
    int len=dic.size();

    for(i=0; i<len; i++)
    {   u=dic[i];
        int leni=u.size();
        for(j=i+1; j<len; j++)
        {

            v=dic[j];

            int lenj=v.size();
            if(leni==lenj)
            {
                int c=0;
                for(k=0; k<leni; k++)
                    if(u[k]!=v[k])
                        c++;
                if(c==1)
                {
                    Graph[index[u]].push_back(index[v]);
                    Graph[index[v]].push_back(index[u]);
                }
            }
            else
                break;
        }
    }
    newline=0;
    while(cin>>u>>v)
    {
        if(newline)
            printf("\n");
        if(u.size()==v.size())
            bfs(index[u],index[v]);
        else
            printf("No solution.\n");
        newline=1;
    }
    return 0;
}
