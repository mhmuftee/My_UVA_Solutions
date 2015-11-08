#include<cstdio>
#include<sstream>
#include<string>
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int maze[505][505],counter,N,M;
vector<char>mazec[505];

void dfs(int i,int j,char c)
{
    if(i<0 || j<0 || i==M || j==N || mazec[i][j]!=c)
        return ;

    mazec[i][j]='%';
    maze[i][j]=counter;

    dfs(i,j+1,c);
    dfs(i,j-1,c);
    dfs(i-1,j,c);
    dfs(i+1,j,c);
    dfs(i+1,j+1,c);
    dfs(i-1,j-1,c);
    dfs(i-1,j+1,c);
    dfs(i+1,j-1,c);
}

int main()
{

    string s;
    int i=0,j;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(getline(cin,s))
    {
        if(s=="%")
        {
            M=i;
            N=mazec[0].size();

            memset(maze,0,sizeof(0));

            counter=1;
            for(i=0; i<M; i++)
                for(j=0; j<N; j++)
                    if(mazec[i][j]!='%')
                        dfs(i,j,mazec[i][j]),counter++;

            for(i=0; i<=500; i++)
                mazec[i].clear();

            int col[1000]= {0};

            for(j=0; j<N; j++)
            {
                int max=0;
                for(i=0; i<M; i++)
                    if(maze[i][j]>max)
                        max=maze[i][j];
                col[j]=max;
            }

            for(i=0; i<M; i++)
            {
                for(j=0; j<N; j++)
                {
                    if(j==0)
                    {
                        if(col[j]<10)printf("%d",maze[i][j]);
                        else if(col[j]<100)printf("%2d",maze[i][j]);
                        else if(col[j]<1000)printf("%3d",maze[i][j]);
                        else if(col[j]<10000)printf("%4d",maze[i][j]);
                        else if(col[j]<100000)printf("%5d",maze[i][j]);
                    }

                    else
                    {
                        if(col[j]<10)printf("%2d",maze[i][j]);
                        else if(col[j]<100)printf("%3d",maze[i][j]);
                        else if(col[j]<1000)printf("%4d",maze[i][j]);
                        else if(col[j]<10000)printf("%5d",maze[i][j]);
                        else if(col[j]<100000)printf("%6d",maze[i][j]);
                    }
                }
                printf("\n");
            }
            printf("%c\n",'%');
            i=0;
            continue;
        }

        char a;
        j=0;
        stringstream ss( s );
        while( ss >> a)
            mazec[i].push_back(a);

        i++;

    }

    M=i;
    N=mazec[0].size();

    memset(maze,0,sizeof(0));

    counter=1;
    for(i=0; i<M; i++)
        for(j=0; j<N; j++)
            if(mazec[i][j]!='%')
                dfs(i,j,mazec[i][j]),counter++;

    for(i=0; i<=500; i++)
        mazec[i].clear();

    int col[1000]= {0};

    for(j=0; j<N; j++)
    {
        int max=0;
        for(i=0; i<M; i++)
            if(maze[i][j]>max)
                max=maze[i][j];
        col[j]=max;
    }

    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            if(j==0)
            {
                if(col[j]<10)printf("%d",maze[i][j]);
                else if(col[j]<100)printf("%2d",maze[i][j]);
                else if(col[j]<1000)printf("%3d",maze[i][j]);
                else if(col[j]<10000)printf("%4d",maze[i][j]);
                else if(col[j]<100000)printf("%5d",maze[i][j]);
            }

            else
            {
                if(col[j]<10)printf("%2d",maze[i][j]);
                else if(col[j]<100)printf("%3d",maze[i][j]);
                else if(col[j]<1000)printf("%4d",maze[i][j]);
                else if(col[j]<10000)printf("%5d",maze[i][j]);
                else if(col[j]<100000)printf("%6d",maze[i][j]);
            }
        }
        printf("\n");
    }
    printf("%c\n",'%');

    return 0;
}
