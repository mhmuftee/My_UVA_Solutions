#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int cas,m,n;

    scanf("%d",&cas);

    while(cas--)

    {
        scanf("%d %d",&m,&n);

        m = n ^ (n>>1);

        printf("%d\n",m);

    }


    return 0;
}
