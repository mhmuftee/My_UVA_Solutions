#include<cstdio>
#include<cmath>
#include<iostream>
#include<fstream>

using namespace std;
int main() {

    char s[50];
    int N,i,a,b,c;
    double pi=2*acos(0),v;

    scanf("%d",&N);
    scanf("\n");
    for(i=0; i<N; i++)
    {
        gets(s);

        c=sscanf(s,"%d %d",&a,&b);
        if(c==2)
        {
            v=pi*2*a*b;
            printf("%.4lf\n",v);
        }
        else if(c==1)
        {   v=pi*a*a/8;

            printf("%.4lf\n",v);
        }
    }
    return 0;
}
