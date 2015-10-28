#include<stdio.h>
#include<math.h>
int main() {
    int T,K,Hour_jhon,min_jhon,rtime;

    int Hour_bus[100],min_bus[100];
    long mintime=100000000,c;
    int i,j,time_jhon,time_bus;

    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
        scanf("%d %d:%d",&K,&Hour_jhon,&min_jhon);
        time_jhon=Hour_jhon*60+min_jhon;
        mintime=100000000;
        for(i=0; i<K; i++)

        {
            scanf("%d:%d %d",&Hour_bus[i],&min_bus[i],&rtime);
            c=rtime;
            time_bus=Hour_bus[i]*60+min_bus[i];
            if(time_bus>=time_jhon)
                c=c+time_bus-time_jhon;
            else if(time_bus<time_jhon)
                c=c+1440-time_jhon+time_bus;
            if(c<=mintime)
                mintime=c;

        }
        printf("Case %d: %ld\n",j,mintime);
    }

    return 0;
}
