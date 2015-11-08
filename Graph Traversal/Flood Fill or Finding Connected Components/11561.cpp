#include<cstdio>
#include<cstring>
using namespace std;

char maze[55][55];
int count,R,C;

void dfs(int i,int j)
{
    if(maze[i][j]=='#')
        return ;

    if(maze[i][j]=='G')
        count++;
    maze[i][j]='#';

    if(maze[i][j-1]=='T' || maze[i][j+1]=='T' || maze[i-1][j]=='T' || maze[i+1][j]=='T')
        return ;

    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
}

int main()
{
    int i,j;
    while(scanf("%d %d",&C,&R)==2)
    {
        for(i=0; i<R; i++)
            scanf("%s",maze[i]);
        count=0;

        for(i=0; i<R; i++)
            for(j=0; j<C; j++)
                if(maze[i][j]=='P')
                {
                    dfs(i,j);
                    break;
                }
        printf("%d\n",count);
    }
}
