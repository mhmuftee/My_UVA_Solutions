#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    int cas,m,n,x,y,z;
    while(scanf("%d",&cas)==1)
    {
        stack<int>S;
        queue<int>Q;
        priority_queue<int>pq;
        bool sk=true,qu=true,pue=true;
        while(cas--)
        {
            scanf("%d %d",&m,&n);
            x=y=z=0;
            if(m==1)
            {
                S.push(n);
                Q.push(n);
                pq.push(n);
                continue;
            }
            if(!S.empty())
                x=S.top();
            if(!Q.empty())
                y=Q.front();
            if(!pq.empty())
                z=pq.top();

            if(sk && x==n)
                sk=true;
            else
                sk=false;

            if(qu && y==n)
                qu=true;
            else
                qu=false;

            if(pue && z==n)
                pue=true;
            else
                pue=false;

            if(x)
                S.pop();
            if(y)
                Q.pop();
            if(z)
                pq.pop();
        }

        if(sk && !qu && !pue)
            printf("stack\n");
        else if(!sk && qu && !pue)
            printf("queue\n");
        else if(!sk && !qu && pue)
            printf("priority queue\n");
        else if(!sk && !qu && !pue)
            printf("impossible\n");
        else
            printf("not sure\n");
    }
    return 0;
}
