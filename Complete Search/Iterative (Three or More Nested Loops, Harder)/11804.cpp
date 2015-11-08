#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;

struct node
{
    char s[100];

    int a,b;
} pod[11];

bool compare_a(node a,node b)
{
    if(a.a>b.a)

        return 1;
    else
        return 0;
}
bool compare_b(node a,node b)
{
    if(a.a==b.a)
    {   if(a.b<b.b)
            return 1;
        else
            return 0;
    }
    return 0;
}

bool compare_c(node a,node b)
{
    if(a.a==b.a && a.b==b.b)
    {   if(strcmp(a.s,b.s)<0)
            return 1;
        else
            return 0;
    }
    return 0;
}
bool compare_name(node a,node b)
{
    int s=strcmp(a.s,b.s);

    if(s<0)
        return 1;
    else
        return 0;
}
int main()
{
    int i,j,k,n;

    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {   for(k=0; k<10; k++)
        {
            scanf("%s %d %d",pod[k].s,&pod[k].a,&pod[k].b);

        }

        sort(pod,pod+10,compare_a);
        sort(pod,pod+10,compare_b);
        sort(pod,pod+10,compare_c);

        sort(pod,pod+5,compare_name);
        sort(pod+5,pod+10,compare_name);
        printf("Case %d:\n",j);
        printf("(%s",pod[0].s);
        for(k=1; k<5; k++)
        {

            printf(", %s",pod[k].s);
        }
        printf(")\n");
        printf("(%s",pod[5].s);
        for(k=6; k<10; k++)
        {

            printf(", %s",pod[k].s);
        }
        printf(")\n");
    }
    return 0;
}
