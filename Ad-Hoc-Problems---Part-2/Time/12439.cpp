#include<cstdio>
#include<cstring>
using namespace std;
bool leap(long n)
{
    if(n%4 == 0 && (n%100 || n%400 == 0))
        return 1;
    else
        return 0;
}
int main()
{
    int k,l,date1,date2,cas;
    long year1,year2,count;
    char month1[10],month2[10];
    scanf("%d",&cas);
    for(k = 1; k <= cas; k++)
    {   count = 0;
        scanf("%s %d, %ld",month1,&date1,&year1);
        scanf("%s %d, %ld",month2,&date2,&year2);
        if(leap(year2))
            if(strcmp(month2,"January") == 0 || strcmp(month2,"February") == 0 && date2<=28 )
                year2-=4;
        if(leap(year1))
            if(strcmp(month1,"January")!=0 && strcmp(month1,"February")!=0)
                year1=year1;
            else
                year1-=4;
        count=year2/4+year2/400-year2/100-year1/4-year1/400+year1/100;
        printf("Case %d: %d\n",k,count);
    }
    return 0;
}
