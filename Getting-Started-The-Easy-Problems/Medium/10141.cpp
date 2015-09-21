#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    string s;
    double a;
    int mn;
} ar[1000];
bool cmp(node x,node y)
{
    if(x.mn>y.mn)
        return 1;
    else
        return 0;
}
bool cmp1(node x,node y)
{
    if(x.mn==y.mn)
    {
        if(x.a<y.a)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

bool cmp2(node x,node y)
{
    if(x.mn==y.mn && x.a<y.a)
    {
        if(x.s<y.s)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int main()
{
    int i,j,k,n,p,cas=1;
    string ss;
    while(scanf("%d %d",&n,&p)==2 && n &&p)
    {
        getchar();
        while(n--)
            getline(cin,ss);

        for(i=0; i<p; i++)
        {
            getline(cin,ss);
            ar[i].s=ss;
            scanf("%lf %d",&ar[i].a,&ar[i].mn);
            getchar();
            for(j=0; j<ar[i].mn; j++)
                getline(cin,ss);
        }
        sort(ar,ar+p,cmp);
        sort(ar,ar+p,cmp1);
        sort(ar,ar+p,cmp2);
        if(cas>1)
            cout<<endl;
        printf("RFP #%d\n",cas);
        cout<<ar[0].s<<endl;
        cas++;

    }
    return 0;
}
