#include<cstdio>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n;

    map<int,int>indexing;
    vector<int>store;
    while(scanf("%d",&n)==1)
    {
        if(!indexing[n])
            store.push_back(n);
        indexing[n]++;
    }

    for(int i=0; i<store.size(); i++)
        printf("%d %d\n",store[i],indexing[store[i]]);

    return 0;
}
