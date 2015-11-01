#include<cstdio>
#include<iostream>
#include<queue>

using namespace std;
int main()
{
    priority_queue< int > q;
    int cas,n,m;
    while(scanf("%d",&n)==1 && n)
    {
        int o=n;
        while(n--)
        {
            scanf("%d",&m);
            q.push(-m);
        }
        int s=0,v=0;

        while( !q.empty() )
        {
            int a=0,b=0;
            a=-q.top();
            q.pop();
            b=-q.top();
            s=a+b;
            v=s+v;
            q.pop();
            if(!q.empty())
                q.push(-s);
        }
        printf("%d\n",v);
    }
    return 0;
}
