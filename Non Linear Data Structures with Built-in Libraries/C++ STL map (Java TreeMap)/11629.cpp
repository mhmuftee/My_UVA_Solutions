#include<iostream>
#include<sstream>
#include<cstdio>
#include<string>
#include<vector>
#include<cstdlib>
#include<map>
using namespace std;

int ati(string s)
{
    int total=0;
    for(int i=0; i<s.size(); i++)
        total=total*10+(s[i]-48);

    return total;
}
int main()
{
    int p,g;
    while(scanf("%d %d",&p,&g)==2)
    {
        map<string,int>index;
        index["+"]=0.0;
        string s;
        double d;
        while(p--)
        {
            cin>>s>>d;
            d=d*10.0;
            int y = (int)d;
            index[s]=y;
        }

        getchar();
        int k=1;
        while(g--)
        {
            getline(cin,s);

            stringstream ss(s);
            string sa;
            vector<string>v;
            while(ss>>sa)
                v.push_back(sa);

            s=v[v.size()-1];
            int dd=ati(s)*10;
            v.pop_back();
            s=v[v.size()-1];
            v.pop_back();
            int total=0;
            for(int i=0; i<v.size(); i++)
                total+=index[v[i]];
            bool chek=0;
            if(s==">")
            {
                if(total>dd)
                    chek=1;
            }
            else if(s=="<")
            {
                if(total<dd)
                    chek=1;
            }
            else

                if(s=="<=")
                {
                    if(total<=dd)
                        chek=1;
                }
                else if(s==">=")
                {
                    if(total>=dd)
                        chek=1;
                }
                else if(s=="=")
                {
                    if(total==dd)
                        chek=1;
                }

            if(chek)
                printf("Guess #%d was correct.\n",k++);
            else
                printf("Guess #%d was incorrect.\n",k++);
        }

    }
    return 0;
}
