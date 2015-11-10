#include<string>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    string s,ss;
    int a,cas;
    cin>>cas;
    while(cas--)
    {
        cin>>s;
        int i,j,len;
        int kas;
        cin>>kas;
        while(kas--)
        {
            cin>>ss;
            len=ss.size();
            if(ss==s.substr(0,len))
                cout<<"y"<<endl;
            else
                cout<<"n"<<endl;
        }
    }
    return 0;
}
