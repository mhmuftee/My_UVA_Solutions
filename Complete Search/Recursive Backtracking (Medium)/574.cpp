#include<cstdio>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

map<vector<int>,int> indx;

bool cmp(int a,int b)
{
    if(a>b) return 1;
    else return 0;
}

int a[25],taken[25],sum=0,N,M,chek;
vector <int> result;

void call(int start)
{
    if(sum>N)return;

    if(sum==N)
    {
        chek=1;
        if(indx[result]) return;

        if(!indx[result])indx[result]=1;

        for(int i=0; i<result.size(); i++)
        {
            if(i)printf("+");
            printf("%d",result[i]);
        }
        printf("\n");
        return ;
    }

    for(int i=start; i<M; i++)
    {
        if(!taken[i])
        {
            taken[i]=1;
            result.push_back(a[i]);
            sum+=a[i];
            call(i+1);
            taken[i]=0;
            int aa=result.back();
            sum-=aa;
            result.pop_back();
        }
    }
}
int main()
{
    while(scanf("%d %d",&N,&M)==2 && M)
    {
        for(int i=0; i<M; i++)
            scanf("%d",&a[i]);

        sort(a+0,a+M,cmp);
        indx.clear();
        printf("Sums of %d:\n",N);
        chek=0;
        call(0);
        if(!chek)printf("NONE\n");
    }
    return 0;
}

