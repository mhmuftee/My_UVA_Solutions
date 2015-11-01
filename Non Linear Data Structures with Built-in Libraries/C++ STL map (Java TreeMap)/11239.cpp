#include<cstdio>
#include<map>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
map<string,int>name;
map<string,string>second;

struct node
{
    int count;
    string ss;
} save[1000];

bool cmp(node a,node b)
{
    if(a.count!=b.count)
        return a.count>b.count;
    else
        return a.ss<b.ss;
}

int main()
{
    int cas,n=0;
    string s;
    while(getline(cin,s))
    {
        if(s=="0")
            break;
        if(s=="1")
        {
            sort(save,save+n,cmp);
            for(int i=0; i<n; i++)
                cout<<save[i].ss<<" "<<save[i].count<<endl;
            name.clear();
            second.clear();
            n=0;
            map<string,int> ::iterator it;
        }
        if(s[0]>='A' && s[0]<='Z')
        {

            save[n].ss=s;
            save[n].count=0;
            if(!name[s])
                name[s]=++n;

        }
        if(s[0]>='a' && s[0]<='z')
        {
            if(second[s]=="")
                second[s]=save[n-1].ss;
            save[n-1].count++;

            else
            {
                string a=second[s];
                if(a!="found")
                {
                    if(a!=save[n-1].ss )
                    {
                        int b=name[a];
                        save[b-1].count--;
                        second[s]="found";
                    }
                }
            }
        }
    }
    return 0;
}
