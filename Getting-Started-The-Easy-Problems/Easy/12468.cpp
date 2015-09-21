#include<cstdio>
using namespace std;


int main()
{

    int c,d,a,b;

    while(scanf("%d %d",&c,&d)==2)
    {
        if(c==-1 && d==-1) break;


        if(c<=d) {a=c;b=d;}
        if(d<c) {a=d;b=c;}


        int diff=b-a;

        int diff1=a+100-b;

        if(diff<=diff1)
            printf("%d\n",diff);
        else
            printf("%d\n",diff1);
    }

    return 0;
}
