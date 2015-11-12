#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int M,N,taken[1000]= {0},take[1000]= {0};
string ss;
map<string,int>index;
vector<char>result;
void call(int start)
{
    if(result.size()==M)
    {
        string pp;
        for(int i=0; i<M; i++)
            cout<<result[i];
        cout<<endl;
        return ;
    }
    char u;
    for(int i=start; i<N; i++)
    {

        if(!taken[i])
        {
            result.push_back(ss[i]);
            taken[i]=1;
            call(i+1);
            taken[i]=0;

            result.pop_back();
        }
        while(ss[i]==ss[i+1])i++;
    }
}

int main()
{
    while(cin>>ss)
    {
        scanf("%d",&M);
        N=ss.length();
        sort(ss.begin(),ss.end());
        result.clear();
        index.clear();
        call(0);
    }
    return 0;
}
