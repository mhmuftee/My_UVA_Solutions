#include<cstdio>
using namespace std;
char maze[15][15];
int M,N,b,w,count;
void dfs(int i,int j)
{
    if(i<0 || j<0 || i==9 || j==9 || maze[i][j]!='.')
        return ;
    if(maze[i][j+1]=='X' || maze[i][j-1]=='X' || maze[i-1][j]=='X' || maze [i+1][j]=='X')
        b=1;
    if(maze[i][j+1]=='O' || maze[i][j-1]=='O' || maze[i-1][j]=='O' || maze [i+1][j]=='O')
        w=1;
    maze[i][j]='#';
    count++;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
}
int main()
{
    int i,j,cas;
    scanf("%d",&cas);
    while(cas--)
    {
        for(i=0; i<9; i++)
            scanf("%s",maze[i]);
        int black=0,white=0;
        for(i=0; i<9; i++)
            for(j=0; j<9; j++)
                if(maze[i][j]=='O')
                    white++;
                else if(maze[i][j]=='X')
                    black++;
                else if(maze[i][j]=='.')
                {
                    b=w=0,count=0;
                    dfs(i,j);
                    if(b && !w)
                        black+=count;
                    if(w && !b)
                        white+=count;
                }
        printf("Black %d White %d\n",black,white);
    }
    return 0;
}
