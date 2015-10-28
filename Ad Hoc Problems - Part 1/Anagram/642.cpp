#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
typedef vector<string> vs;
int main()
{
    string s;
    map<string,vs>index;
    while(cin>>s)
    {
        if(s=="XXXXXX")
            break;

        string ss=s;
        sort(s.begin(),s.end());
        index[s].push_back(ss);
    }

    while(cin>>s)
    {
        if(s=="XXXXXX")
            break;
        sort(s.begin(),s.end());

        if(!index[s].size())
            printf("NOT A VALID WORD\n");
        else
        {
            sort(index[s].begin(),index[s].end());
            for(int i=0; i<index[s].size(); i++)
                cout<<index[s][i]<<endl;
        }
        printf("******\n");
    }

    return 0;
}
