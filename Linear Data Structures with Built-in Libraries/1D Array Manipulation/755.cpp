#include<string>
#include<map>
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int cas;
    map<char,char>m;
    for(char i='0'; i<='9'; i++)
        m[i]=i;
    m['A']=m['B']=m['C']='2';
    m['D']=m['E']=m['F']='3';
    m['G']=m['H']=m['I']='4';
    m['J']=m['K']=m['L']='5';
    m['M']=m['N']=m['O']='6';
    m['P']=m['R']=m['S']='7';
    m['T']=m['U']=m['V']='8';
    m['W']=m['X']=m['Y']='9';
    scanf("%d",&cas);
    int nw=0;
    while(cas--)
    {
        int n;
        if(nw)
            printf("\n");
        scanf("%d",&n);
        string s;
        map<string,int>index;
        while(n--)
        {
            cin>>s;
            string ss;
            for(int i=0; i<s.size(); i++)
                if(s[i]!='-')
                    ss.push_back(m[s[i]]);

            s.clear();
            int i;
            for(i=0; i<3; i++)
                s.push_back(ss[i]);
            s.push_back('-');
            for(i=3; i<ss.size(); i++)
                s.push_back(ss[i]);
            index[s]++;
        }

        map<string,int> :: iterator it;

        vector<pair<string,int> >si;

        for(it=index.begin(); it!=index.end(); ++it)
            if(it->second>1)
                si.push_back(make_pair(it->first,it->second));

        sort(si.begin(),si.end());

        if(si.size()==0)
            printf("No duplicates.\n");
        else
        {
            for(int i=0; i<si.size(); i++)
                cout<<si[i].first<<" "<<si[i].second<<endl;
        }
        nw=1;
    }
    return 0;
}
