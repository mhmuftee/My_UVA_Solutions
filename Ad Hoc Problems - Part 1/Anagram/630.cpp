#include<cstdio>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int i,j,k,tcas,n,nw=0,chek;
    string s,a,b;
    vector<string>v;
    scanf("%d",&tcas);
    while(tcas--)
    {
        if(nw)
            printf("\n");
        v.clear();
        scanf("%d",&n);
        for(i=0; i<n; i++)
            cin>>s,v.push_back(s);

        while(cin>>s)
        {
            if(s=="END")
                break;
            cout<<"Anagrams for: "<<s<<endl;
            chek=0;
            for(i=0,j=1; i<v.size(); i++)
            {
                a=v[i];
                b=s;
                sort(b.begin(),b.end());
                sort(a.begin(),a.end());

                if(a==b)
                {
                    chek=1;
                    cout<<"  "<<j<<") "<<v[i]<<endl;
                    j++;
                }
            }
            if(chek==0)
                cout<<"No anagrams for: "<<s<<endl;
        }
        nw++;
    }
    return 0;
}
