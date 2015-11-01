#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string a,string b)
{
    string z,v;
    z=a+b;
    v=b+a;
    if(z>v)
        return 1;
    else
        return 0;
}
int main()
{
    string ar[51];
    int i,n;
    while(scanf("%d",&n)==1 && n)
    {
        for(i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n,cmp);
        for(i=0; i<n; i++)
            cout<<ar[i];
        cout<<endl;
    }
    return 0;
}
