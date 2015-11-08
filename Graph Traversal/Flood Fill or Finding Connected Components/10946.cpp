#include<cstdio>
#include<algorithm>
#define max 50
using namespace std;
char ch,c[max][max];
int m,n,sum;

struct nod
{
    char ca;
    int ab;
} ax[2500];
void dfs(int i, int j,char ch)
{
    if(i < 0 || j<0 || i==m || j==n  || c[i][j]!=ch)
        return ;
    sum++;
    c[i][j]='.';
    dfs(i,j+1,ch);
    dfs(i,j-1,ch);
    dfs(i-1,j,ch);
    dfs(i+1,j,ch);
}
bool cmp(nod a,nod b)
{
    if(a.ab>b.ab)
        return 1;
    if(a.ab==b.ab && a.ca<b.ca)
        return 1;
    return 0;
}
int main()
{
    int i,j,k=1,co;
    while(scanf("%d %d",&m,&n)==2  && m && n)
    {   co=0;
        for(i=0; i<m; i++)
            scanf("%s",c[i]);
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                if(c[i][j]!='.')
                {
                    sum=0;
                    char a=c[i][j];
                    dfs(i,j,c[i][j]);
                    ax[co].ca=a;
                    ax[co].ab=sum;
                    co++;
                }
        sort(ax,ax+co,cmp);
        printf("Problem %d:\n",k);
        for(i=0; i<co; i++)
            printf("%c %d\n",ax[i].ca,ax[i].ab);
        k++;
    }
    return 0;
}
