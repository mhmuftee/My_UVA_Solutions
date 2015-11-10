#include<string>
#include<map>
#include<cstdio>
#include<iostream>

using namespace std;
map <string , int> m;
map<string,int>::iterator it;
pair<string,int> MAX;
int main()
{
    string s,ss;
    int a;
    while(cin>>a)
    {   cin>>s;
        m.clear();

        int i,j,len=s.size();
        for(i=0; i<len-a+1; i++)
        {
            ss.clear();
            ss=s.substr(i,a);
            m[ss]++;
        }
        it = m.begin();
        MAX = *m.begin();
        do
        {
            if ((*it).second > MAX.second)
                MAX = (*it);
        } while ( m.value_comp()(*it++, *m.rbegin()));
        cout<<MAX.first<<endl;

    }
    return 0;
}
