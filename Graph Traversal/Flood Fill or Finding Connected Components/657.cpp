#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

char maze[55][55];
int m,n,c;
void df(int i, int j)
{
    if(i < 0 || j<0 || i>=m || j>=n || maze[i][j]!='X')
        return ;
    maze[i][j]='*';
    df(i,j+1);
    df(i,j-1);
    df(i-1,j);
    df(i+1,j);
}
void dfs(int i, int j)
{
    if(maze[i][j]=='X')
    {
        c++;
        df(i,j);
    }
    if(i < 0 || j<0 || i>=m || j>=n || maze[i][j]!='*')
        return ;

    maze[i][j]='.';
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i-1,j);
    dfs(i+1,j);
}
int main()
{
    int i,cas=1;
    while(scanf("%d %d",&n,&m)==2 && m && n)

    {
        vector<int>v;
        getchar();
        for(i=0; i<m; i++)
            gets(maze[i]);

        for(i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(maze[i][j]=='*')
                {
                    c=0;
                    dfs(i,j);
                    v.push_back(c);
                }
            }
        }

        for(i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(maze[i][j]=='X')
                {
                    c=0;
                    dfs(i,j);
                    v.push_back(c);
                }
            }
        }
        sort(v.begin(),v.end());
        printf("Throw %d\n%d",cas++,v[0]);
        for(i=1; i<v.size(); i++)
            printf(" %d",v[i]);
        printf("\n\n");
    }
    return 0;
}
