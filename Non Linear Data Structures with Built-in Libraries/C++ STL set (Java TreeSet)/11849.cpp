#include<cstdio>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    int x,y;

    while(scanf("%d %d",&x,&y)==2)
    {
        map<int,int>index;
        if(!x && !y)
            break;
        int a,b;
        while(x--)
        {
            scanf("%d",&a);
            if(!index[a])
                index[a]=1;
        }
        int c=0;
        while(y--)
        {
            scanf("%d",&b);
            if(index[b])
                c++;

        }
        printf("%d\n",c);
    }
    return 0;
}
