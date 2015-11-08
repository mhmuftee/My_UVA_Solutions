#include<cstdio>
#include<cstring>
#include<algorithm>
#define max 201
using namespace std;

int m,sum,row[max],col[max];
char c[max][max];

void dfs(int r, int cc, char ch)
{
    if(r<0 || cc<0 || r>=m || cc>=m || c[r][cc]!=ch)
        return ;
    c[r][cc]='.';
    sum=r;
    row[sum]=1;
    dfs(r,cc-1,ch);
    dfs(r,cc+1,ch);
    dfs(r+1,cc,ch);
    dfs(r-1,cc,ch);
    dfs(r-1,cc-1,ch);
    dfs(r+1,cc+1,ch);
}
void dfsc(int r, int cc, char ch)
{
    if(cc==m)
        return ;
    if(r<0 || cc<0 || r>=m || cc>=m || c[r][cc]!=ch)
        return ;
    c[r][cc]='.';
    sum=cc;
    col[sum]=1;
    dfsc(r,cc-1,ch);
    dfsc(r,cc+1,ch);
    dfsc(r+1,cc,ch);
    dfsc(r-1,cc,ch);
    dfsc(r-1,cc-1,ch);
    dfsc(r+1,cc+1,ch);
}
int main()
{
    int i,k=1;
    while( scanf("%d",&m)==1 && m)
    {   sum=0;
        for(i=0; i<m; i++)
            scanf("%s",c[i]);
        for(i=0; i<=max; i++)
        {
            row[i]=col[i]=0;
        }
        for(i=0; i<m; i++)
        {   for(int j=0; j<m; j++)
                row[j]=0;
            if(c[0][i]=='b')
            {
                sum=0;
                dfs(0,i,c[0][i]);
            }
            int countr=0;
            for(int j=0; j<m; j++)
                if(row[j]==1)
                    countr++;
            if(countr==m)
            {
                printf("%d B\n",k);
                break;
            }
        }
        sum=0;
        for(i=0; i<m; i++)
        {   for(int j=0; j<m; j++)
                col[j]=0;
            if(c[i][0]=='w')
            {
                sum=0;
                dfsc(i,0,c[i][0]);
            }
            int countc=0;
            for(int j=0; j<m; j++)
                if(col[j]==1)
                    countc++;
            if(countc==m)
            {
                printf("%d W\n",k);
                break;
            }
        }
        k++;
    }
    return 0;
}
