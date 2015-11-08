#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

struct no
{
    double x,y;
} coor[101];

int par[101];
double w[101][101];

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
} edge[4951];
bool cmp(node a,node b)
{
    if(a.weight<b.weight)
        return true;
    return false;
}
int main()
{
    int i,j,k=0,N,cas,E,f,s;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&N);
        for(i=1; i<=N; i++)
        {   scanf("%lf %lf",&coor[i].x,&coor[i].y);
        }
        E=0;
        for(i=0; i<101; i++)
            for(j=0; j<101; j++)
                w[i][j]=-1.0;
        double dis,ww,tot=0;
        if(N>=3)
        {
            for(i=1; i<=N; i++)
                for(j=1; j<=N; j++)
                {
                    if(i!=j && w[i][j]==-1)
                    {
                        dis=hypot((coor[i].x-coor[j].x),(coor[i].y-coor[j].y));
                        w[i][j]=w[j][i]=dis;
                        edge[E].fir=i;
                        edge[E].sec=j;
                        edge[E].weight=dis;
                        E++;
                    }
                }
            make(E);
            sort(edge,edge+E,cmp);
            for(i=0,j=0; i<E; i++)
            {
                f=edge[i].fir;
                s=edge[i].sec;
                ww=edge[i].weight;
                if(Union(s,f))
                {
                    tot+=ww;
                    j++;
                }
                if(j+1==E)
                    break;
            }

        }
        if(N==2)
        {
            tot=hypot(coor[2].x-coor[1].x,coor[2].y-coor[1].y);
        }
        if(k)
            printf("\n");
        printf("%.2lf\n",tot);
        k=1;
    }
    return 0;
}
