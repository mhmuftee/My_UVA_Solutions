#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    string s;
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        cin>>s;
        sort(s.begin(),s.end(),cmp);
        do
        {
            cout<<s<<endl;
        } while(next_permutation(s.begin(),s.end()));
        cout<<endl;
    }
    return 0;
}

