#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

char matrix[100][100];
int M,N,a,b,count;
vector<string> result;

void dfs(int i,int j)
{
    if(i<0 || j<0 || i>=M || j>=N ||( matrix[i][j]!='I'
                                      && matrix[i][j]!='E' && matrix[i][j]!='H' && matrix[i][j]!='O'
                                      && matrix[i][j]!='V' && matrix[i][j]!='A' && matrix[i][j]!='#'
                                      && matrix[i][j]!='@'))
    {
        result.pop_back();
        return;
    }
    matrix[i][j]='1';
    count++;
    result.push_back("forth");
    dfs(i-1,j);

    result.push_back("left");
    dfs(i,j-1);
    result.push_back("right");
    dfs(i,j+1);
}

int main()
{
    int cas;
    scanf("%d",&cas);

    for(int ik=1; ik<=cas; ik++)
    {
        scanf("%d %d",&M,&N);

        for(int i=0; i<M; i++)
            scanf("%s",matrix[i]);

        for(int j=0; j<N; j++)
            if(matrix[M-1][j]=='@')
                a=M-1,b=j;

        count=0;
        result.clear();
        dfs(a,b);

        for(int i=0; i<result.size(); i++)
        {   if(i)printf(" ");
            cout<<result[i];
        }
        cout<<endl;
    }
    return 0;
}
