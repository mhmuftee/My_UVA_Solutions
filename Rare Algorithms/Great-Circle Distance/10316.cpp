#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

#define PI acos(-1.0)
#define EARTH_RAD (6371009)

double gcDistance(double pLat, double pLong,
                  double qLat, double qLong) {
    pLat *= PI / 180;
    pLong *= PI / 180;
    qLat *= PI / 180;
    qLong *= PI / 180;
    return  acos(cos(pLat)*cos(pLong)*cos(qLat)*cos(qLong) +
                 cos(pLat)*sin(pLong)*cos(qLat)*sin(qLong) +
                 sin(pLat)*sin(qLat));
}
struct node
{
    double x,y;
} arr[1005];
const double eps = 1e-6;
const double inf = 1e30;
bool xyd(double x,double y) {
    return x < y + eps;
}
bool dy(double x,double y)  {
    return x > y + eps;
}
int main()
{
    int i,j,cas;
    double x,y;
    freopen("in.txt","r",stdin);
    while(scanf("%d",&cas)==1)
    {
        for(i=0; i<cas; i++)
            scanf("%lf %lf",&arr[i].x,&arr[i].y);

        double max=inf;
        for(i=0; i<cas; i++)
        {
            double s,min=0.0;
            if(i==j) continue;
            for(j=0; j<cas; j++)
            {   s=gcDistance(arr[i].x,arr[i].y,arr[j].x,arr[j].y);
                if(dy(s,min))
                    min=s;
            }
            if(dy(min,max))
            {
                max=min;
                x=arr[i].x;
                y=arr[i].y;
            }
        }
        printf("%.2lf %.2lf\n",x,y);
    }
    return 0;
}
