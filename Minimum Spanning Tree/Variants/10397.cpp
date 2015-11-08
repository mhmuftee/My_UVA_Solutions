#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

struct no
{
    double x,y;
} coor[755];

int par[755];
double w[755][755];

int find(int n)
{
    if(par[n]!=n)
        par[n]=find(par[n]);
    return par[n];
}
void make(int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
}
int Union(int a,int b)
{
    int u,v;
    u=find(a);
    v=find(b);
    if(u==v)
        return 0;
    else
    {
        par[u]=v;
        return 1;
    }
}
struct node
{
    int fir,sec;
    double weight;
} edge[281000];
bool cmp(node a,node b)
{
    if(a.weight<b.weight)
        return true;
    return false;
}
int main()
{
    int i,j,k=0,N,cas,E,f,s;
    while(scanf("%d",&N)==1)
    {
        for(i=1; i<=N; i++)
        {
            scanf("%lf %lf",&coor[i].x,&coor[i].y);
        }
        E=0;
        for(i=0; i<=750; i++)
            for(j=0; j<=750; j++)
                w[i][j]=-1.0;
        double dis,ww,tot=0;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)
            {
                if(w[i][j]==-1)
                {
                    dis=(coor[i].x-coor[j].x)*(coor[i].x-coor[j].x)+(coor[i].y-coor[j].y)*(coor[i].y-coor[j].y);
                    dis=sqrt(dis);
                    w[i][j]=w[j][i]=dis;
                    edge[E].fir=i;
                    edge[E].sec=j;
                    edge[E].weight=dis;
                    E++;
                }
            }
        make(E);
        int M;
        scanf("%d",&M);
        while(M--)
        {
            scanf("%d %d",&f,&s);
            int b=Union(f,s);
        }

        sort(edge,edge+E,cmp);
        int h=0;

        for(i=0,j=0; i<E; i++)
        {
            f=edge[i].fir;
            s=edge[i].sec;
            ww=edge[i].weight;
            if(Union(s,f))
            {
                tot+=ww;

                h=1;
                j++;
            }
            if(j+1==E)
                break;
        }
        printf("%.2lf\n",tot);
    }
    return 0;
}



