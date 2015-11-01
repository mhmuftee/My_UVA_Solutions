#include<cstdio>
#include<queue>
using namespace std;

int main()
{

    int N;

    while(scanf("%d",&N)==1 && N)
    {
        queue <int> q;
        for(int i=1; i<=N; i++)
            q.push(i);

        printf("Discarded cards:");

        while(!q.empty())
        {
            if(q.size()==1)
            {
                printf("\nRemaining card: %d\n",q.front());
                q.pop();
            }

            else
            {
                printf(" %d",q.front());
                q.pop();
                if(q.size()!=1)
                    printf(",");
                int a=q.front();
                q.pop();
                q.push(a);
            }

        }

    }

    return 0;
}
