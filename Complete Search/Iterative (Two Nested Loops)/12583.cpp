#include<cstdio>
#include<string>
#include<iostream>
#include<map>
using namespace std;

int main()
{
    int cas,N,M;
    string s;
    scanf("%d",&cas);
    for(int ii=1; ii<=cas; ii++)
    {
        cin>>N>>M>>s;
        int count=0;
        map<char,int>index;
        for(int i=0; i<N; i++)
        {
            if(index[s[i]])
                if(i+1-index[s[i]]<=M)
                    count++;

            index[s[i]]=i+1;
        }

        printf("Case %d: %d\n",ii,count);
    }
    return 0;
}
