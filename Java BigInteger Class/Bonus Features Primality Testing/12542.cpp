#include<cstdio>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
#define max 100000
long  convert(string ss)
{
    long  s=0,len=ss.length();
    for(int i=0 ; i<len; i++)
        s=(ss[i]-48)+s*10;

    return s;
}

bool pr[max+5];
int save[max+5];
int prime[max+5];

void sieve()
{
    int i,j,k=0,n=sqrt(max);

    for(i=4; i<=max; i+=2)
        pr[i]=1;
    pr[1]=1;
    for(i=3; i<=n; i+=2)
        if(pr[i]==0)
            for(j=i*i; j<=max; j+=2*i)
                pr[j]=1;
}
int main()
{
    string s;
    sieve();
    while(cin>>s)
    {
        if(s=="0")
            break;
        int len=s.length(),count=0;
        int maximum=0,prim,f=0;
        for(int i=len; i>=1; i--)
        {
            for(int j=0; j<len-i+1 && j<=5; j++)
            {
                string ss;
                ss=s.substr(j,i);
                if(ss.size()>5)
                    break;
                prim=convert(ss);
                if(!pr[prim])
                    if(prim>maximum)
                    {
                        maximum=prim;
                        f=1;
                    }
            }
            if(f)
                break;
        }
        cout<<maximum<<endl;
    }
    return 0;
}
