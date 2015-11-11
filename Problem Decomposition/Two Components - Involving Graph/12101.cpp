#include<iostream>
#include<cmath>
#include<fstream>
#include<cstdio>
#include<map>
#include<vector>
#include<queue>
using namespace std;
int prime[2000];
map<int,int>index;
vector<int>Graph[1062];
void sieve(int L,int U)
{
    int i,j,d;
    d=U-L+1;
    bool *flag=new bool[d];
    for (i=0; i<d; i++) flag[i]=true;

    for (i=(L%2!=0); i<d; i+=2) flag[i]=false;

    for (i=3; i<=sqrt(U); i+=2)
    {
        if (i>L && !flag[i-L]) continue;
        j=L/i*i;
        if (j<L) j+=i;
        if (j==i) j+=i;
        j-=L;
        for (; j<d; j+=i) flag[j]=false;
    }

    if (L<=1) flag[1-L]=false;
    if (L<=2) flag[2-L]=true;
    int c=0;
    for (i=0; i<d; i++) if (flag[i])
        {
            c++;
            prime[c]= (L+i);
            index[L+i]=c;
        }
}
bool chek(int a,int b)
{
    int c=b-a,count=0;
    for(int i=0; i<4; i++,a=a/10,b=b/10)
        if(a%10!=b%10)
            count++;
    if(count==1)
        return true;
    else
        return false;

}
void bfs(int src,int dis)
{
    queue < int > Q;
    int color[2000]= {0},dist[2000],parent[2000]= {0};
    Q.push(src);
    dist[src]=0;
    color[src]=1;
    parent[src]=0;
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
                parent[v]=u;
                Q.push(v);
            }
        }
        Q.pop();
    }
    if(dist[dis])
        printf("%d\n",dist[dis]);
    else
        printf("Impossible\n");

}
int main()
{

    sieve(1000,9999);

    for(int i=1; i<1061; i++)
        for(int j=i+1; j<=1061; j++)
        {

            if(chek(prime[i],prime[j]))
            {
                Graph[i].push_back(j);
                Graph[j].push_back(i);
            }
        }
    int cas,a,b;

    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d %d",&b,&a);
        if(index[a]==index[b])
            printf("0\n");
        else
            bfs(index[a],index[b]);
    }

    return 0;

}
