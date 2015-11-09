#include<cstdio>
#include<iostream>
#include<cstring>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
map <char,int> p;
int main()
{
    p['B']=1;
    p['U']=2;
    p['S']=3;
    p['P']=4;
    p['F']=5;
    p['T']=6;
    p['M']=7;
    int cas,i,j;
    vector<int>ans;
    string line;
    scanf("%d",&cas);

    while(cas--)
    {
        line.clear();
        ans.clear();
        cin>>line;
        int i,cou=1,pp=0,pu=0,len=line.size();
        int ax=p[line[0]];
        for(i=0; i<ax; i++)
            ans.push_back(0);
        for( i=0; i<len; i++)
        {
            if(cou>9)
            {
                pp=1;
                break;
            }
            if(line[i]==line[i+1])
                cou++;
            else
            {
                if(p[line[i]]>p[line[i+1]])
                    ans[p[line[i]]-1]=cou;
                else
                {
                    pu=1;
                    break;
                }
                cou=1;
            }
        }

        if(pu)
        {
            pp=pu=0;
            cou=1;
            ans.clear();
            reverse(line.begin(),line.end());
            ax=p[line[0]];
            for(i=0; i<ax; i++)
                ans.push_back(0);
            for( i=0; i<len; i++)
            {
                if(cou>9)
                {
                    pp=1;
                    break;
                }
                if(line[i]==line[i+1])
                    cou++;
                else
                {
                    if(p[line[i]]>p[line[i+1]])
                        ans[p[line[i]]-1]=cou;
                    else
                    {
                        pu=1;
                        break;
                    }
                    cou=1;
                }
            }
        }
        if(!pu && !pp)
            for(i=ans.size()-1; i>=0; i--)
                printf("%d",ans[i]);
        else
            cout<<"error";
        cout<<endl;
    }
    return 0;
}
