#include<cstdio>
#include<cstring>
using namespace std;
char g[100][100],vis[100][100];
int m,n,cou;
void dfs(int i, int j)
{
    if(i < 0 || j<0 || i>=m || j>=n || (vis[i][j]=='1'&& g[i][j]=='W') || g[i][j]=='L')
        return ;
    vis[i][j]='1';
    cou++;
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i-1,j);
    dfs(i+1,j);
    dfs(i-1,j+1);
    dfs(i-1,j-1);
    dfs(i+1,j-1);
    dfs(i+1,j+1);
}
int main()
{
    char c[100];
    int i,j,a,b,cas,chek=-1;
    scanf("%d",&cas);
    getchar();
    m=n=0;
    while(gets(c))
    {
        cas=sscanf(c,"%d %d",&a,&b);
        if(cas==-1)
        {
            m=n=0;
            chek++;
            if(chek)
                printf("\n");
        }
        if(cas==0)
        {
            strcpy(g[m],c);
            n=strlen(g[m]);
            m++;
        }
        if(cas==2)
        {   cou=0;
            for(i=0; i<m; i++)
                for(j=0; j<n; j++)
                    vis[i][j]=0;
            if(g[a-1][b-1]=='W')
                dfs(a-1,b-1);

            printf("%d\n",cou);
        }
    }
    return 0;
}
