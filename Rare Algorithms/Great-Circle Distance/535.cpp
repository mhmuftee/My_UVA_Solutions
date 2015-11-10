#include<cstdio>
#include<cmath>
#include<string>
#include<map>
#include<iostream>
using namespace std;
map<string,int>index;
struct node
{
    double x,y;
} arr[105];


#define PI 3.141592653589793
#define r (6378)

double dis_3d(double lat1, double lng1, double lat2, double lng2)
{
    double dlon = lng2 - lng1;
    double dlat = lat2 - lat1;
    double a = pow((sin(dlat/2)),2) + cos(lat1) * cos(lat2) * pow(sin(dlon/2), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    double d = r * c;
    d=floor(d+.5);
    return d;
}
int main()
{
    int i,j,k,bb=1;
    string a,b,s;
    double lat,log;
    index.clear();
    while(cin>>s)
    {
        if(s[0]=='#')
            break;
        cin>>lat>>log;
        if(!index[s])
            index[s]=++bb;

        arr[index[s]].x=lat;
        arr[index[s]].y=log;
    }
    while(cin>>a>>b)
    {
        if(a[0]=='#' && b[0]=='#')
        {
            bb=0;
            index.clear();
            break;
        }

        cout<<a<<" - "<<b<<endl;
        if(!index[a] || !index[b])
            cout<<"Unknown"<<endl;
        else
            cout<<dis_3d(arr[index[a]].x*PI/180,arr[index[a]].y*PI/180,arr[index[b]].x*PI/180,arr[index[b]].y*PI/180)<<" km"<<endl;
    }
    return 0;
}
