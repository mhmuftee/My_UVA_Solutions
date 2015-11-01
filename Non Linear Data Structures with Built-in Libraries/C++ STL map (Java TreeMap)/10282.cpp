#include<cstdio>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    map<string,string> index;
    char a[100],b[100],c[100];
    string x,y;

    while (gets(c))
    {
        if(c[0]=='\0')
            break;
        sscanf(c,"%s %s",a,b);
        x=a;
        y=b;

        index[y]=x;
    }

    while(cin>>y)
    {
        if(index[y].size())
            cout<<index[y];
        else
            cout<<"eh";
        cout<<endl;
    }
    return 0;
}

