#include<cstdio>
#include<list>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    string s;
    int i,j;
    while(getline(cin,s))
    {
        list<char> mylist;
        list<char> :: iterator it;
        int k=s.size();
        for(i=0; i<k; i++)
            if(s[i]=='[')
            {   it=mylist.begin();
                for(j=i+1; j<k; j++)
                {
                    if(s[j]==']')
                    {
                        i=j;
                        break;
                    }
                    if(s[j]=='[')
                    {
                        i=j-1;
                        break;
                    }
                    mylist.insert(it,s[j]);

                }
                if(j==k)break;

            }
            else if(s[i]!=']')
                mylist.push_back(s[i]);
        for(it=mylist.begin(); it!=mylist.end(); ++it)
            cout<<*it;
        cout<<endl;

    }
    return 0;
}
