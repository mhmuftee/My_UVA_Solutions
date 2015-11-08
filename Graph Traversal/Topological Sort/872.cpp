#include<sstream>
#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
typedef pair<char,char>cc;

int main()
{
    string input,contrat;
    int cas=0,kas;
    scanf("%d",&kas);
    getchar();
    while(kas--)
    {
        getchar();
        if(cas)
            cout<<endl;
        cas++;
        getline(cin,input);
        getline(cin,contrat);

        char c,a,b;
        string s,d;

        stringstream ss(input);

        while(ss>>c)
            s.push_back(c);

        vector<cc>con;

        stringstream sss(contrat);

        while(sss>>d)
        {

            a=d[0];
            b=d[2];
            con.push_back(cc(a,b));
        }

        sort(s.begin(),s.end());

        int f=0;

        do
        {
            map<char,int>index;
            int len=s.size(),flag;
            for(int i=0; i<len; i++)
                index[s[i]]=i+1;
            flag=0;
            len=con.size();

            for(int i=0; i<len; i++)
                if(index[con[i].first]>index[con[i].second])
                {
                    flag=1;
                    break;
                }

            if(!flag)
            {
                len=s.size();
                cout<<s[0];
                for(int i=1; i<len; i++)
                    cout<<" "<<s[i];
                cout<<endl;
                f=1;
            }
        }
        while(next_permutation(s.begin(),s.end()));

        if(!f)
            printf("NO\n");
    }
    return 0;
}

