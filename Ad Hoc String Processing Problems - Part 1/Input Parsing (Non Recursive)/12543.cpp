#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    string s,sss;

    int Max=0;
    while(cin>>s && s!="E-N-D")
    {
        string ss;

        for(int i=0; i<s.size(); i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || s[i]=='-')
            {   if(s[i]>='A' && s[i]<='Z')
                    ss.push_back(s[i]+32);
                else
                    ss.push_back(s[i]);
            }
            else ss.clear();
        }

        if(ss.size()>Max) {
            sss=ss;
            Max=ss.size();
        }
    }

    cout<<sss<<endl;

    return 0;
}
