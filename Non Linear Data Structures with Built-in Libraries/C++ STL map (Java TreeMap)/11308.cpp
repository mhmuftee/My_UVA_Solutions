#include<cstdio>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int cas;
    scanf("%d",&cas);
    getchar();
    while(cas--)
    {
        string binder_name,s;

        getline(cin,binder_name);
        transform(binder_name.begin(), binder_name.end(), binder_name.begin(), ::toupper);
        int m,n,b,cost;
        cin>>m>>n>>b;

        map<string,int>ingredeint;
        while(m--)
        {
            cin>>s>>cost;
            ingredeint[s]=cost;
        }
        map<string,int>recipe;
        getchar();
        while(n--)
        {
            string recipe_name;
            getline(cin,recipe_name);
            scanf("%d",&m);
            int c=0;
            while(m--)
            {
                cin>>s>>cost;
                c+=ingredeint[s]*cost;
            }
            getchar();
            recipe[recipe_name]=c;
        }

        vector<pair<int ,string> >index;

        map<string,int> :: iterator it;

        for(it=recipe.begin(); it!=recipe.end(); it++)
            index.push_back(make_pair(it->second,it->first));

        sort(index.begin(),index.end());
        bool chek=0;
        cout<<binder_name<<endl;
        for(int i=0; i<index.size(); i++)
        {
            if(index[i].first<=b)
            {   cout<<index[i].second<<endl;
                chek=1;
            }
        }
        if(!chek)
            cout<<"Too expensive!"<<endl;
        cout<<endl;
    }
    return 0;
}
