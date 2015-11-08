#include<cstdio>
#include<sstream>
#include<iostream>
using namespace std;
int maze[105][105],n,az;

void dfs(int i, int j,int m)
{
    if(i < 0 || j<0 || i>n || j>n || maze[i][j]!=m)
        return ;
    maze[i][j]=0;
    az++;
    dfs(i,j+1,m);
    dfs(i,j-1,m);
    dfs(i-1,j,m);
    dfs(i+1,j,m);
}

int main()
{
    int i,j,a,b;
    while (scanf("%d",&n)==1 && n)
    {

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                maze[i][j]=1;

        char line[1000];

        while(getchar()!='\n');

        for(i=2; i<=n; i++)
        {
            gets( line );
            stringstream ss( line );
            while( ss >> a >> b)maze[a][b]=i;

        }
        int found=0;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(maze[i][j] && !found)
                {
                    az=0;
                    dfs(i,j,maze[i][j]);
                    if(az!=n)
                        found=1;
                }
        if(!found)
            printf("good\n");
        else
            printf("wrong\n");
    }
    return 0;
}
