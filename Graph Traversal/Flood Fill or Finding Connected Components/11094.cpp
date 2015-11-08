#include<cstdio>
#include<map>
#include<cstring>
using namespace std;

char maze[25][25],x,y;
int i,j,M,N,count;

void dfs(int i, int j,char m)
{
    if(i < 0 || j<0 || i>M || j>N || maze[i][j]!=m)
        return ;
    maze[i][j]=2;
    count++;

    dfs(i,j+N-1,m);
    dfs(i,j+1,m);
    dfs(i,j-1,m);
    dfs(i-1,j,m);
    dfs(i+1,j,m);
}
int main()
{
    while(scanf("%d %d",&M,&N)==2)
    {
        for(i=0; i<M; i++)
            scanf("%s",maze[i]);

        map <char,int>index;

        for(i=0; i<M; i++)
            for(j=0; j<N; j++)
            {
                if(index[maze[i][j]]==0)
                    x=maze[i][j];
                if(index[maze[i][j]]==1 && maze[i][j]!=x)
                    y=maze[i][j];
                if(!index[maze[i][j]])
                    index[maze[i][j]]++;
            }

        int a,b,f=0;
        scanf("%d %d",&a,&b);
        count=0;
        x=maze[a][b];

        dfs(a,b,maze[a][b]);
        int max=0;
        count=0;
        for(i=0; i<M; i++)
            for(j=0; j<N; j++)
            {
                if(maze[i][j]==x)
                {
                    count=0;
                    dfs(i,j,maze[i][j]);
                    if(count>max)
                        max=count;
                }
            }
        printf("%d\n",max);
    }
    return 0;
}
