#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int i,N,r,coun;
    double a,b;
    while(scanf("%d %d",&N,&r)==2 && N && r)
    {
        coun=0;
        for(i=0; i<N ; i++)
        {
            scanf("%lf %lf",&a,&b);
            if(sqrt((a-0)*(a-0)+(b-0)*(b-0))<=r && sqrt((a-r)*(a-r)+(b-0)*(b-0))<=r && sqrt((a-0)*(a-0)+(b-r)*(b-r))<=r && sqrt((a-r)*(a-r)+(b-r)*(b-r))<=r)
                coun++;
        }
        a=coun*r*r/(double)N;
        printf("%.5lf\n",a);
    }
    return 0;
}
