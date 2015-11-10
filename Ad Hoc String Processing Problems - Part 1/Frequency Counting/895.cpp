#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<iostream>
using namespace std;

vector <string> dictionary,ss;
bool taken[10010];
string s;
vector<char>result;
map <string,int> ind,dic;
int n,len,coun;
void call()
{
    if(result.size()<=n)
    {
        int count=0;
        string ss;

        for(int i=0; i<result.size(); i++)
            ss.push_back(result[i]);

        if(!ind[ss]) {
            ind[ss]=1;

            if(dic[ss])coun+=dic[ss];
        }
    }
    for(int i=0; i<len; i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            result.push_back(s[i]);
            call();
            taken[i]=0;
            result.pop_back();
        }
    }
}

int main()
{
    while(cin>>s)
    {
        if(s=="#") break;
        if(s.size()>n)n=s.size();
        if(s.size()<=7) {
            dic[s]++;
            dictionary.push_back(s);
        }
    }
    getchar();

    while(getline(cin,s))
    {
        if(s=="#") break;
        string sss;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=' ')sss.push_back(s[i]);
        }
        sort(sss.begin(),sss.end());
        ss.push_back(sss);
    }
    for(int i=0; i<ss.size(); i++)
    {
        s=ss[i];
        coun=0;
        len=s.size();
        ind.clear();
        memset(taken,0,sizeof(taken));
        call();
        cout<<coun<<endl;
    }
    return 0;
}
