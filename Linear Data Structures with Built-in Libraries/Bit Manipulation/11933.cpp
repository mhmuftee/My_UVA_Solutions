#include<cstdio>
#include<bitset>
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        bitset <32> foo = n ;
        bitset <32> a,b;
        int c=0;
        for(int i=0; i<foo.size(); i++)
        {
            if(foo[i]==1)
            {   c++;

                if(c%2==0)
                    b[i]=1;
                else
                    a[i]=1;
            }
        }
        cout<<a.to_ulong()<<" "<<b.to_ulong()<<endl;
    }
    return 0;
}
