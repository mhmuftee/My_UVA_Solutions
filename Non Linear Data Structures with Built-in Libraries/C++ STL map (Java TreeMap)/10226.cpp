#include<cstdio>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
map<string,int>index;
vector <string> st;

int main()
{
    int cas,newline=0;
    scanf("%d",&cas);
    getchar();
    getchar();
    string s;
    while(cas--)
    {   int total=0;
        st.clear();
        index.clear();
        while(getline(cin,s))
        {
            if(s=="")
                break;
            if(!index[s])
                st.push_back(s);
            index[s]++;
            total++;
        }
        sort(st.begin(),st.end());
        if(newline)
            printf("\n");
        for(int i=0; i<st.size(); i++)
        {
            double a=100*index[st[i]]/(double)total;
            cout<<st[i]<<" ";
            printf("%.4lf\n",a);
        }
        newline=1;
    }
    return 0;
}
