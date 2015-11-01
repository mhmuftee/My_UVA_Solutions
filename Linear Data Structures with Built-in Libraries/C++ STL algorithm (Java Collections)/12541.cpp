#include<cstdio>
#include<algorithm>
using namespace std;

struct node
{
    char s[100];
    int date,month,year;
} arr[1000];

bool cmp (node a, node b)
{
    if(a.year!=b.year)
        return a.year<b.year;
    else if(a.month!=b.month)
        return a.month<b.month;
    else
        return a.date<b.date;

}
int main()
{
    int i,n;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%s %d %d %d",&arr[i].s,&arr[i].date,&arr[i].month,&arr[i].year);

        sort(arr,arr+n,cmp);
        printf("%s\n%s\n",arr[n-1].s,arr[0].s);
    }
    return 0;
}
