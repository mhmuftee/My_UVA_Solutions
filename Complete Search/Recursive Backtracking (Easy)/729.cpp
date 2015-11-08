#include <cstdio>
#include<vector>
using namespace std;
vector <int> result;

int N,H,a[20];

void call()
{
    if(result.size()==N)
    {
        int sum=0;
        for(int i=0; i<N; i++)
            if((a[i]==1 && result[i]==0) || (a[i]==0 && result[i]==1))
                sum++;

        if(sum==H)
        {
            for(int i=0; i<N; i++)
                printf("%d",result[i]);
            printf("\n");
        }
        return ;
    }

    for(int i=0; i<2; i++)
    {
        result.push_back(i);
        call();
        result.pop_back();
    }
}

int main()
{
    int aux,kas=0;
    scanf("%d",&aux);
    while(aux--)
    {
        if(kas)printf("\n");
        kas=1;
        scanf("%d %d",&N,&H);
        for(int i=0; i<N; i++)
            a[i]=0;
        call();
    }
    return 0;
}
