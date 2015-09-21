#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int cas=0;
    string s;
    while(cin>>s && s!="*")
    {

        printf("Case %d: ",++cas);
        if(s=="Hajj")
        cout<<"Hajj-e-Akbar"<<endl;
        else
        cout<<"Hajj-e-Asghar"<<endl;
    }
    return 0;
}
