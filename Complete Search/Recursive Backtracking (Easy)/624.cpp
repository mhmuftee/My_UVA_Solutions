#include<cstdio>
#include<vector>
using namespace std;
int a[25],taken[25],sum=0,N,M,mini;

vector <int> result,ans;
void call(int start) {
    if(sum>N)return ;
    int m=M-sum;
    if(m<mini)
    {
        mini=m;
        ans=result;
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
    while(scanf("%d %d",&N,&M)==2)
    {
        for(int i=0; i<M; i++)
            scanf("%d",&a[i]);
        ans.clear();
        mini=100000;
        call(0);
        int s=0;
        for(int i=0; i<ans.size(); i++)
            printf("%d ",ans[i]),s+=ans[i];
        printf("sum:%d\n",s);
    }
    return 0;
}
