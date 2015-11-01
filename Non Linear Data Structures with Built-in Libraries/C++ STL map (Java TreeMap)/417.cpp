#include<iostream>
#include<cstdio>
#include<string>
#include<map>
using namespace std;
map<string,int>index;

int main()
{
    int j=1;
    string s;
    for(int i=1; i<=26; i++)
    {
        char a=i+96;
        s.push_back(a);
        index[s]=j++;
        s.clear();
    }

    for(int i=1; i<=26; i++)
    {
        for(int k=i+1; k<=26; k++)
        {
            char a=i+96;
            s.push_back(a);
            a=k+96;
            s.push_back(a);
            index[s]=j++;
            s.clear();
        }
    }

    for(int i=1; i<=26; i++)
    {
        for(int k=i+1; k<=26; k++)
            for(int l=k+1; l<=26; l++)
            {
                char a=i+96;
                s.push_back(a);
                a=k+96;
                s.push_back(a);
                a=l+96;
                s.push_back(a);
                index[s]=j++;
                s.clear();
            }
    }

    for(int i=1; i<=26; i++)
    {
        for(int k=i+1; k<=26; k++)
            for(int l=k+1; l<=26; l++)
                for(int m=l+1; m<=26; m++)
                {
                    char a=i+96;
                    s.push_back(a);
                    a=k+96;
                    s.push_back(a);
                    a=l+96;
                    s.push_back(a);
                    a=m+96;
                    s.push_back(a);
                    index[s]=j++;
                    s.clear();
                }
    }
    for(int i=1; i<=26; i++)
    {
        for(int k=i+1; k<=26; k++)
            for(int l=k+1; l<=26; l++)
                for(int m=l+1; m<=26; m++)
                    for(int n=m+1; n<=26; n++)
                    {
                        char a=i+96;
                        s.push_back(a);
                        a=k+96;
                        s.push_back(a);
                        a=l+96;
                        s.push_back(a);
                        a=m+96;
                        s.push_back(a);
                        a=n+96;
                        s.push_back(a);
                        index[s]=j++;
                        s.clear();
                    }
    }
    while(cin>>s)
        if(index[s])
            cout<<index[s]<<endl;
        else
            cout<<"0"<<endl;
    return 0;
}
