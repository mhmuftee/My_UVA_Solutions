#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<sstream>

int gcd(int a,int b)
{
    if (a%b==0) return b;
    else return gcd(b,a%b);
}
using namespace std;

int main()
{
    int save[1005];
    string line;
    while(1)
    {
        getline(cin,line);
        stringstream ss( line );
        int num,i=0;
        int v[1005];
        while( ss >> num )
            v[i++]=num;
        if(v[0]==0)
            break;

        for(int j=1; j<i-1; j++)
        {
            int s=abs(v[j]-v[j-1]);
            save[j]=s;
        }
        int g=save[1];
        for(int j=2; j<i-1; j++)
            if(save[j])
                g=gcd(g,save[j]);

        printf("%d\n",g);

    }
    return 0;
}
