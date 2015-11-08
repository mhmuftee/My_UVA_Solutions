#include<sstream>
#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
typedef pair<char,char>cc;

int main()
{
    string input,contrat;
    int cas=0;
    while(getline(cin,input))
    {
        if(cas)
            cout<<endl;
        cas++;
        getline(cin,contrat);

        char c,a,b;
        string s;

        stringstream ss(input);

        while(ss>>c)
            s.push_back(c);

        vector<cc>con;

        stringstream sss(contrat);

        while(sss>>a>>b)
            con.push_back(cc(a,b));

        sort(s.begin(),s.end());

        do
        {
            map<char,int>index;
            int len=s.size(),flag=0;
            for(int i=0; i<len; i++)
                index[s[i]]=i+1;

            len=con.size();

            for(int i=0; i<len; i++)
                if(index[con[i].first]>index[con[i].second])
                {
                    flag=1;
                    break;
                }
            if(!flag)
                cout<<s<<endl;
        }
        while(next_permutation(s.begin(),s.end()));
    }
    return 0;
}
