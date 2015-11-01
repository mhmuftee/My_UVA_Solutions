#include<cstdio>
#include<iostream>
#include<string>
#include<map>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int cas;
    while(scanf("%d",&cas)==1 && cas)
    {
        map<string,int>index;
        while(cas--)
        {
            string ss;
            int a[10];
            scanf("%d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[0]);
            char sa[1000];
            sort(a,a+5);
            sprintf(sa,"%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
            ss=sa;
            index[ss]++;
        }

        int max=0;
        map<string,int>::iterator it;
        for(it=index.begin(); it!=index.end(); ++it)
            if(it->second>max)
                max=it->second;

        int count=0;
        for(it=index.begin(); it!=index.end(); ++it)
            if(it->second==max)
                count++;
        cout<<count*max<<endl;
    }
    return 0;
}
