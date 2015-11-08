#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int zero;
vector<int>result;
vector<string> ans,str;
string s,sx;

void call()
{
    if(result.size()==zero)
    {   for(int i=0,j=0; i<s.size(); i++)
            if(s[i]=='#')
                cout<<sx;
            else if(s[i]=='0')
                printf("%d",result[j++]);
        printf("\n");

        return ;
    }

    for(int i=0; i<10; i++)
    {
        result.push_back(i);
        call();
        result.pop_back();
    }
}

int main()
{
    int M,N;

    while(scanf("%d",&N)==1)
    {
        str.clear();
        ans.clear();
        for(int i=0; i<N; i++)
            cin>>s,str.push_back(s);

        scanf("%d",&M);

        for(int k=0; k<M; k++)
        {
            cin>>s;
            ans.push_back(s);
        }
        printf("--\n");
        for(int k=0; k<M; k++)
        {   s=ans[k];

            for(int l=0; l<N; l++)
            {
                sx=str[l];
                zero=0;
                for(int j=0; j<s.size(); j++)
                    if(s[j]=='0')
                        zero++;
                call();
            }
        }
    }
    return 0;
}
