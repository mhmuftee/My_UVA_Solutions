#include<cstdio>
#include<stack>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int cas;
    scanf("%d",&cas);
    string s;
    for(int ii=1; ii<=cas; ii++)
    {
        cin>>s;
        stack<char>S;

        vector<int>G[1000];

        int len=s.size();
        S.push(s[0]);
        for(int i=1; i<len; i++)
        {
            if(!S.empty())
            {
                if(S.top()==s[i])
                    S.pop();
                else
                {
                    int u=s[i];
                    int v=S.top();
                    S.push(s[i]);
                    G[u].push_back(v);
                    G[v].push_back(u);
                }
            }
        }
        printf("Case %d\n",ii);
        for(int i=65; i<=90; i++)
        {
            if(G[i].size())
            {
                printf("%c = %d\n",i,G[i].size());
            }
        }
    }
    return 0;
}
