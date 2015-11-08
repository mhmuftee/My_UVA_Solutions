#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<sstream>
using namespace std;

int gcd(int a,int b)
{
    if (a%b==0) return b;
    else return gcd(b,a%b);
}

int main(void)
{
    int kase;
    string line;

    scanf("%d",&kase);
    getchar();
    while( kase-- )
    {
        getline(cin,line);
        stringstream ss( line );
        int num;
        vector< int > v;
        while( ss >> num )
            v.push_back( num );

        int max=0,m=0;
        for(int j=0; j<v.size(); j++)
            for(int i=0; i<v.size(); i++)
            {
                if(i!=j)
                    m=gcd(v[i],v[j]);
                if(m>max)
                    max=m;
            }

        printf("%d\n",max);

        line.clear();
    }
    return 0;
}

