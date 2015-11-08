#include<cstdio>
#include<algorithm>
#define max 50
using namespace std;

int m,n;
char c[max][max];

struct node
{
    char ca;
    int ab;
} sv[max];

void dfs(int r, int cc, char ch)
{
    if(r<0 || cc<0 || r==m || cc==n || c[r][cc]!=ch)
        return ;
    c[r][cc]='.';
    dfs(r,cc-1,ch);
    dfs(r,cc+1,ch);
    dfs(r+1,cc,ch);
    dfs(r-1,cc,ch);
}

bool cmp(node a,node b)
{
    if(a.ab>b.ab)
        return 1;
    if(a.ab==b.ab && a.ca<b.ca)
        return 1;
    return 0;
}
int main()
{
    int i,j,k,cas;

    scanf("%d",&cas);
    for(k=1; k<=cas; k++)
    {   for(i=0; i<27; i++)
            sv[i].ab=0;
        scanf("%d %d",&m,&n);
        for(i=0; i<m; i++)
            scanf("%s",c[i]);
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                if(c[i][j]!='.')
                {
                    sv[c[i][j]-96].ca=c[i][j];
                    sv[c[i][j]-96].ab++;
                    dfs(i,j,c[i][j]);
                }
        sort(sv+1,sv+26,cmp);
        printf("World #%d\n",k);
        for(i=0; i<27; i++)
            if(sv[i].ab)
                printf("%c: %d\n",sv[i].ca,sv[i].ab);
    }
    return 0;
}
