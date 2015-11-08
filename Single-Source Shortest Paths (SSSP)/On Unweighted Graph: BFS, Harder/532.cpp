#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
char s[35][35][35];
int save[35][35][35];

struct axis
{
    int x,y,z;
} ax[42875];

int bfs(int src,int des)
{
    queue < int > Q;
    int color[42875]= {0},dist[42875]= {0};
    Q.push(src);
    dist[src]=0;
    color[src]=1;
    int i,j,k;

    while(!Q.empty())
    {
        int u=Q.front();
        i=ax[u].x;
        j=ax[u].y;
        k=ax[u].z;
        if(s[i][j][k+1]=='.')
        {
            int v=save[i][j][k+1];

            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i][j][k-1]=='.')
        {
            int v=save[i][j][k-1];

            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i][j+1][k]=='.')
        {
            int v=save[i][j+1][k];

            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i][j-1][k]=='.')
        {
            int v=save[i][j-1][k];

            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i+1][j][k]=='.')
        {
            int v=save[i+1][j][k];

            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        if(s[i-1][j][k]=='.')
        {
            int v=save[i-1][j][k];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    return dist[des];
}
int main()
{
    int i,j,k,L,R,C;
    while(scanf("%d %d %d",&L,&R,&C)==3 && L && R && C)
    {
        for(i=0; i<=L+1; i++)
            for(j=0; j<=R+1; j++)
                for(k=0; k<=C+1; k++)
                    s[i][j][k]='#';
        getchar();
        for(i=1; i<=L; i++)
        {   for(j=1; j<=R; j++)
            {   for(k=1; k<=C; k++)
                    scanf("%c",&s[i][j][k]);
                getchar();
            }
            getchar();
        }

        int n=0,src,des,endi,endj,endk;
        for(i=1; i<=L; i++)
            for(j=1; j<=R; j++)
                for(k=1; k<=C; k++)
                    save[i][j][k]=n++,
                                  ax[save[i][j][k]].x=i,
                                                    ax[save[i][j][k]].y=j,
                                                                      ax[save[i][j][k]].z=k;

        for(i=1; i<=L; i++)
            for(j=1; j<=R; j++)
                for(k=1; k<=C; k++)
                {
                    if(s[i][j][k]=='S')
                    {
                        src=save[i][j][k];
                    }
                    if(s[i][j][k]=='E')
                    {
                        des=save[i][j][k];
                        endi=i;
                        endj=j;
                        endk=k;
                    }
                }
        s[endi][endj][endk]='.';
        int dis=bfs(src,des);
        if(dis)
            printf("Escaped in %d minute(s).\n",dis);
        else
            printf("Trapped!\n");
    }
    return 0;
}
