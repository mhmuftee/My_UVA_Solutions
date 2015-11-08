#include<cstdio>
#include<cstring>
using namespace std;
char ch,c[26][26];
int m;
void dfs(int i, int j)
{
    if(i < 0 || j<0 || i>=m || j>=m || c[i][j]=='0')
        return ;
    c[i][j]='0';
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i-1,j);
    dfs(i+1,j);
    dfs(i-1,j+1);
    dfs(i-1,j-1);
    dfs(i+1,j-1);
    dfs(i+1,j+1);
}
int main() {

    int i,j,k=1,n,count;
    while(scanf("%d",&m)==1) {
        count=0;
        n=m;
        for(i=0; i<m; i++)
            scanf("%s",c[i]);
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                if(c[i][j]=='1') {
                    count++;
                    dfs(i,j);
                }
        printf("Image number %d contains %d war eagles.\n",k,count);
        k++;
    }
    return 0;
}
