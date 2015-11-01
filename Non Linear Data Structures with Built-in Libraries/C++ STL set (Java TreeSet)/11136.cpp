#include<cstdio>
#include<iostream>
#include<set>

using namespace std;


int main()
{
    int kas;
    long long diff;

    while(scanf("%d",&kas)==1 && kas)
    {
        multiset <long long int> mysets;
        multiset <long long int> :: iterator it;

        diff=0;

        for(int i=0; i<kas; i++)
        {
            long long  items,item,Min,Max;

            scanf("%lld",&items);

            for(int j=0; j<items; j++)
            {
                scanf("%lld",&item);
                mysets.insert(item);

            }
            it=mysets.begin();

            Min=*it;

            mysets.erase(it);

            it=mysets.end();
            it--;
            Max=*it;
            diff+=Max-Min;
            mysets.erase(it,mysets.end());
        }
        printf("%lld\n",diff);
    }

    return 0;
}
