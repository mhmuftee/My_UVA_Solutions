#include<iostream>
#include<cstdio>
#include<map>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    int m,n;

    while(scanf("%d %d",&m,&n)==2)
    {
        map<string,int>index;
        string s;
        int d;
        while(m--) {
            cin>>s>>d;
            index[s]=d;

        }
        getchar();
        while(n--) {
            int total=0;
            while(getline(cin,s))
            {

                if(s==".")
                    break;
                stringstream ss(s);
                string sa;
                while(ss>>sa)
                {
                    if(index[sa])
                        total+=index[sa];
                }
            }
            printf("%d\n",total);
        }
    }
    return 0;
}
