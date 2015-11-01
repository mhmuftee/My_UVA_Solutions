#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long  cas,N,R,i,j,sq;

    scanf("%lld",&cas);
    for(j=1; j<=cas; j++)
    {
        scanf("%lld %lld",&N,&R);
        printf("Case #%lld:",j);
        if(N==R)
        {   printf(" 0\n");
            continue;
        }
        N-=R;
        vector<long long >ans;
        sq=sqrt(N);

        for(i=1; i<=sq; i++)
        {
            if(N%i==0)
            {
                if(i>R && i!=(N/i))
                    ans.push_back(i);
                if((N/i)>R)
                    ans.push_back(N/i);

            }
        }
        sort(ans.begin(),ans.end());


        for(i=0; i<ans.size(); i++)
            printf(" %lld",ans[i]);
        printf("\n");
    }
}
