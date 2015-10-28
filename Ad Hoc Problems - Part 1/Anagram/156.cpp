#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
    vector<string>v,vv;
    int i,j,k;
    string s,num;
    while( getline( cin, s) ) {
        if(s[0]=='#') break;
        stringstream sss( s );
        string num;
        while( sss >> num ) v.push_back( num );
        sort( v.begin(), v.end() );
    }
    for(i=0; i<v.size(); i++)

    {
        num=v[i];
        transform(num.begin(), num.end(), num.begin(), ::tolower);
        sort(num.begin(),num.end());
        bool chek=0;
        for(j=0; j<v.size(); j++)
        {
            if(i!=j) {
                s=v[j];
                transform(s.begin(), s.end(), s.begin(), ::tolower);
                sort(s.begin(),s.end());
                if(num==s)
                    chek=1;
            }
        }
        if(chek==0)
            vv.push_back(v[i]);
    }

    for(i=0; i<vv.size(); i++)
        cout<<vv[i]<<endl;

    return 0;
}
