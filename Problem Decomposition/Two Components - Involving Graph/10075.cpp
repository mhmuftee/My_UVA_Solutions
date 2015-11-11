#include<cstdio>
#include<cmath>
#include<map>
#include<iostream>
#include<string>
using namespace std;
#define INF 1e9
#define PI 3.141592653589793
#define EARTH_RAD (6378)
struct node
{
    double lat,log;
} arr[105];
map<string,int> index;

int gcDistance(double pLat, double pLong,
               double qLat, double qLong) {
    pLat *= PI / 180;
    pLong *= PI / 180;
    qLat *= PI / 180;
    qLong *= PI / 180;
    return  floor(EARTH_RAD*acos(cos(pLat)*cos(pLong)*cos(qLat)*cos(qLong) +
                                 cos(pLat)*sin(pLong)*cos(qLat)*sin(qLong) +
                                 sin(pLat)*sin(qLat))+.5);
}
int main()
{
    int i,j,k,m,n,q,floyd[105][105],cas=1;
    string s,g;
    double lat,log;
    //freopen("in.txt","r",stdin);
    while(scanf("%d %d %d",&n,&m,&q)==3 && n && m && q)
    {
        for(i=0; i<=100; i++)
            for(j=0; j<=100; j++)
                floyd[i][j]=INF,floyd[i][i]=0;
        index.clear();

        for(i=1; i<=n; i++)
        {
            cin>>s>>lat>>log;
            if(!index[s])
                index[s]=i;
            arr[index[s]].lat=lat;
            arr[index[s]].log=log;
        }

        for(i=1; i<=m; i++)
        {
            cin>>s>>g;
            floyd[index[s]][index[g]]=gcDistance(arr[index[s]].lat,arr[index[s]].log,arr[index[g]].lat,arr[index[g]].log);
            //printf("%d\n",floyd[index[s]][index[g]]);
        }

        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    if(floyd[i][j]>floyd[i][k]+floyd[k][j])
                        floyd[i][j]=floyd[i][k]+floyd[k][j];

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(floyd[i][j]==INF)
                    floyd[i][j]=0;
        if(cas>1)
            printf("\n");
        printf("Case #%d\n",cas);
        for(i=1; i<=q; i++)
        {   cin>>s>>g;
            if(floyd[index[s]][index[g]])
                printf("%d km\n",floyd[index[s]][index[g]]);
            else
                printf("no route exists\n");
        }
        cas++;
    }

    return 0;
}
