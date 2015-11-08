#include<cstdio>
#include<cstring>
using namespace std;

char maze[35][85],put;
bool chek[35][85];

void dfs(int i,int j)
{
    if(maze[i][j]=='X' || chek[i][j]==true || maze[i][j]=='\0')
        return ;
    chek[i][j]=true;
    maze[i][j]=put;

    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i+1,j);
    dfs(i-1,j);
}

int main()
{
    int i,j,k,nn;
    nn=0;
    memset(chek,false,sizeof(chek));
    memset(maze,0,sizeof(maze));
    while(gets(maze[nn]))
    {
        nn++;
        if(maze[nn-1][0]=='_')
        {
            for(i=0; i<nn-1; i++)
            {
                int k=strlen(maze[i]);
                for(j=0; j<k; j++)
                {
                    if(maze[i][j]!='X' && chek[i][j]==0 && maze[i][j]!=32)
                    {
                        put=maze[i][j];
                        dfs(i,j);
                    }
                }
            }
            for(i=0; i<nn; i++)
                puts(maze[i]);
            nn=0;
            memset(chek,false,sizeof(chek));
            memset(maze,0,sizeof(maze));
        }
    }
    return 0;
}
