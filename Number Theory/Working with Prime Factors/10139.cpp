#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

vector<pair<int,int> > store;

void prime_factor(int m)
{
    for(int i=2; i<=sqrt(m);)
    {
        int c=0;
        while(!(m%i))
        {
            m/=i;
            c++;
        }
        if(c)
            store.push_back(make_pair(i,c));
        i++;
    }
    if(m>1)
        store.push_back(make_pair(m,1));
}

int get_powers(int n, int p)
{
    int result = 0;
    n /= p;
    do
    {
        result += n;
        n /= p;
    }
    while(n > 0);

    return result;
}

int main()
{
    int m,n;

    while(scanf("%d %d",&n,&m)==2)
    {
        store.clear()'

        prime_factor(m);
        int found =1;
        for(int i=0; i<store.size(); i++)
    {
        if(get_powers(n,store[i].first)<store[i].second)
    {
        found=0;
        break;
    }
    }

        if(found)
        printf("%d divides %d!\n",m,n);
        else
        printf("%d does not divide %d!\n",m,n);
    }
        return 0;
    }
