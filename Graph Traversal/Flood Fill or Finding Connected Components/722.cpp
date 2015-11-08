#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

#define max 105
char maze[max][max],input[max][max];
int M,N,count;

void dfs(int i,int j)
{
    if(i<0 || j<0 || i==M || j==N || maze[i][j]=='L')
        return ;
    count++;
    maze[i][j]='L';
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i-1,j);
    dfs(i+1,j);
}

int main()
{
    int i,j,cas,a,b,x,y,newline=0;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d %d",&a,&b);

        getchar();
        char s[105];
        x=0;
        while(gets(s) ) {
            if(s[0]=='\0')break;
            strcpy(input[x],s);
            ++x;
        }
        y=strlen(input[x-1]);

        for(i=0; i<x+2; i++)
            for(j=0; j<y+2; j++)
                maze[i][j]='L';

        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
                if(input[i][j]=='0')
                    maze[i+1][j+1]='W';
        }
        M=x+2;
        N=y+2;

        count=0;
        dfs(a,b);
        if(newline)printf("\n");
        printf("%d\n",count);
        newline=1;
    }
    return 0;
}
