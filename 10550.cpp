#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,d,s;

    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4 && (a || b || c || d))
    {
        s=1080;
        if(a-b<0)
            s+=(40+(a-b))*9;
        else
            s+=(a-b)*9;
        if(c-b<0)
            s+=(40+(c-b))*9;
        else
            s+=(c-b)*9;
        if(c-d<0)
            s+=(40+(c-d))*9;
        else
            s+=(c-d)*9;
        printf("%d\n",s);
    }
    return 0;
}
