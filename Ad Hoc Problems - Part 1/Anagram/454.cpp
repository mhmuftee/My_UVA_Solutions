#include<cstdio>
#include<cstring>
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s,a,b;
    int i,j,k,cas,ne=0;
    vector<string>ss;
    scanf("%d",&cas);
    getchar();
    getchar();
    while(cas--)
    {

        if(ne)
            cout<<endl;
        while(getline(cin,s))
        {
            if(s=="")
                break;
            ss.push_back(s);
        }

        sort(ss.begin(),ss.end());

        for(i=0; i<ss.size(); i++)
        {

            for(j=0; j<ss[i].size(); j++)
                if(ss[i][j]!=' ')
                    a.push_back(ss[i][j]);
            sort(a.begin(),a.end());

            for(j=i+1; j<ss.size(); j++)
            {
                if(i!=j)
                {
                    for(k=0; k<ss[j].size(); k++)
                        if(ss[j][k]!=' ')
                            b.push_back(ss[j][k]);
                    sort(b.begin(),b.end());
                    if(a==b)
                        cout<<ss[i]<<" = "<<ss[j]<<endl;
                    b.clear();
                }
            }
            a.clear();
        }
        ss.clear();

        ne++;
    }
    return 0;
}
