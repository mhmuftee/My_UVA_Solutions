#include<cstdio>
#include<cstring>
using namespace std;

char maze[105][105];
int N,count;

void dfs(int i, int j)
{
    if(i < 0 || j<0 || i>=N || j>=N || maze[i][j]=='.')
        return ;
    maze[i][j]='.';
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i-1,j);
    dfs(i+1,j);
}
int main()
{
    int i,j,cas,cou=1;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&N);

        for(i=0; i<N; i++)
            scanf("%s",&maze[i]);
        int c=0;
        for(i=0; i<N; i++)
            for(j=0; j<N; j++)
                if(maze[i][j]=='x')
                    dfs(i,j),c++;

        printf("Case %d: %d\n",cou++,c);
    }
    return 0;
}
