#include<cstdio>
using namespace std;
int max(int xx,int yy);
int min(int aa,int bb);

int main()
{
    int n,kase=0;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
    {   if(kase)
            printf("\n");
        int l1,l2,d1,d2,r1,r2,u1,u2;
        scanf("%d %d %d %d",&l1,&d1,&r1,&u1);
        scanf("%d %d %d %d",&l2,&d2,&r2,&u2);

        l1=max(l1,l2);
        r1=min(r1,r2);
        d1=max(d1,d2);
        u1=min(u1,u2);


        if(l1>=r1||d1>=u1)
            printf("No Overlap\n");

        else
            printf("%d %d %d %d\n",l1,d1,r1,u1);
        kase=1;
    }
    return 0;
}

int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int min(int c,int d)
{
    if(c<=d)
        return c;
    else
        return d;
}
