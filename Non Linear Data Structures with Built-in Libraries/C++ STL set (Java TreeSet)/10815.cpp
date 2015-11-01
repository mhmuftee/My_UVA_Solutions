#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)

{
    vector <string> vs;
    string d;
    char s[2000];

    while(gets(s))
    {
        d.clear();
        for(int j=0; j<strlen(s); j++)
            s[j]=tolower(s[j]);

        for(int i=0; i<=strlen(s); i++) {
            if(s[i] >= 'a' && s[i] <= 'z')
                d.push_back(s[i]);
            if(s[i]<'a') {
                vs.push_back(d);
                d.clear();
            }
        }
    }

    sort( vs.begin(), vs.end() );

    vs.push_back( "l" );
    for(int i=0; i<vs.size()-1; i++)
        if(vs[i+1]==vs[i])
            continue;
        else if (vs[i]!="\0")
            cout<<vs[i]<<endl;

    return 0;
}
