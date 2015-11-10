#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    string T;

    int cas;

    scanf("%d",&cas);
    getchar();

    while(cas--)
    {
        getchar();
        getline(cin,T);
        int size=T.size();

        for(int i=1; i<=size; i++)
        {
            string str;
            if(size%i==0) {
                str=T.substr (0,i);
                string s="";
                for(int j=1; j<=size/i; j++)
                    s=s+str;
                if(s==T)
                {
                    printf("%d\n",str.size());
                    break;
                }
            }
        }

        int chek,i;

        if(cas)cout<<endl;
    }

    return 0;
}
