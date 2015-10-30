#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

struct node
{
    int n;
    string d;
} array[10000];

bool cmp(node a,node b)
{
    if(a.n<b.n)
        return true;
    else
        return false;
}

int main(void)

{
    int kase,ass=0;
    string line,line2,s;

    cin>>kase;
    getchar();
    while(kase--)
    {
        getline(cin,s);

        getline(cin,line);
        stringstream ss( line );
        getline (cin,line2);
        stringstream si( line2 );
        int num,i=0;

        while( ss >> num )
            array[i++].n=num;

        string nm;
        int k=0;
        while( si >> nm )
            array[k++].d=nm;

        sort(array,array+k,cmp);
        if(ass)cout<<endl;
        for(int j=0; j<i; j++)
            cout<<array[j].d<<endl;
        ass=1;
    }
    return 0;

}
