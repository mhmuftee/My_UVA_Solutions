#include<cstdio>
#include<vector>
#define pp pair<long long ,long long >
using namespace std;

int main()
{
    int a,c,cas;
    while(scanf("%d",&a)==1)
    {

        vector <pp> v;
        int max=1000000;
        for(long i=a+1; i<=2*a; i++)
        {
            long long b=(a*i/(i-a));
            if(b*i/(b+i)==a)
                v.push_back(make_pair(b,i));
        }

        int x=v.size();
        printf("%d\n",x);
        for(int i=0; i<x; i++)
            printf("1/%d = 1/%lld + 1/%lld\n",a,v[i].first,v[i].second);
    }
    return 0;
}
