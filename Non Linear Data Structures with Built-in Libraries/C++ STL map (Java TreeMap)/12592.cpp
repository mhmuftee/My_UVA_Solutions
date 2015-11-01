#include<iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;


int main()
{

    int cas,kas;

    while(scanf("%d",&cas)==1)
    {
        map<string,string>mymap;
        getchar();
        while(cas--)
        {
            string a,b;
            getline(cin,a);
            getline(cin,b);
            mymap[a]=b;
        }
        scanf("%d",&kas);
        getchar();

        while(kas--)
        {
            string a;
            getline(cin,a);
            cout<<mymap[a]<<endl;
        }
    }

    return 0;

}
