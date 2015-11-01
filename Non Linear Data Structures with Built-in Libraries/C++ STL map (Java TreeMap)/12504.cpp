#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

map <string,string> ind;
map<string,int>chek;

vector <string> add,neg,change;

int main()
{
    int cas;

    scanf("%d",&cas);

    getchar();
    char c;

    for(int i=0; i<cas; i++)
    {

        ind.clear();
        chek.clear();
        add.clear();
        neg.clear();
        change.clear();

        string key,value;

        char str[10000];

        gets(str);

        char *pch;
        int index=1;

        pch = strtok (str,"{,:}");
        while (pch != NULL)
        {

            if(index%2) key=pch;
            else value=pch;
            if(index%2==0)
            {
                ind[key]=value;
                chek[key]=1;
            }
            pch = strtok (NULL, "{,:}");
            index++;
        }

        gets(str);
        index=1;

        pch = strtok (str,"{,:}");
        while (pch != NULL)
        {
            if(index%2) key=pch;
            else value=pch;
            if(index%2==0)
            {
                if(ind[key]=="")
                    add.push_back(key);
                else
                {
                    if(ind[key]!="") chek[key]=2;
                    if(ind[key]!=value) change.push_back(key);
                }
            }
            pch = strtok (NULL, "{,:}");
            index++;
        }


        sort(add.begin(),add.end());

        if(add.size())
        {
            printf("+");
            for(int i=0; i<add.size(); i++)
            {
                if(i)cout<<',';
                cout<<add[i];
            }
            cout<<endl;
        }



        for (std::map<string,int>::iterator it=chek.begin(); it!=chek.end(); ++it)
            if(it->second==1)neg.push_back(it->first);


        sort(neg.begin(),neg.end());

        if(neg.size())
        {
            printf("-");
            for(int i=0; i<neg.size(); i++)
            {
                if(i)cout<<',';
                cout<<neg[i];
            }
            cout<<endl;
        }
        sort(change.begin(),change.end());

        if(change.size())
        {
            printf("*");
            for(int i=0; i<change.size(); i++)
            {
                if(i)cout<<',';
                cout<<change[i];
            }
            cout<<endl;
        }

        if(!add.size() && !change.size() && !neg.size())
            cout<<"No changes"<<endl;

        cout<<endl;
    }
    return 0;
}
