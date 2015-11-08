#include<cstdio>
#include<cstring>
using namespace std;
char maze[35][85];
void dfs(int i,int j)
{
    if(maze[i][j]!=' ' && maze[i][j]!='*')
        return ;
    maze[i][j]='#';
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i+1,j);
    dfs(i-1,j);
}
int main()
{
    int i,j,k,cas,x,y;
    char s[85];
    scanf("%d",&cas);
    getchar();
    while(cas--)
    {
        i=0;
        while(1)
        {
            gets(maze[i]);

            k=strlen(maze[i]);
            for(j=0; j<k; j++)
                if(maze[i][j]=='*')
                {
                    x=i;
                    y=j;
                }
            if(maze[i][0]=='_')
                break;
            i++;
        }
        dfs(x,y);
        for(k=0; k<=i; k++)
            puts(maze[k]);
    }
    return 0;
}
