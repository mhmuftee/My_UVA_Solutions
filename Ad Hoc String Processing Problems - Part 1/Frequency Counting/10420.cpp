#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(void)
{
    vector<string> s;
    string a;
    char line[1000];

    int n;
    scanf("%d",&n);
    while(n--)
    {   cin>>a;
        s.push_back(a);
        gets(line);
    }

    sort(s.begin(),s.end());
    int count=1;

    s.push_back("A");
    for(int i=0; i<s.size()-1; i++)
        if(s[i]==s[i+1])
            count++;
        else
        {   cout<<s[i]<<' '<<count<<endl;
            count=1;
        }

    return 0;
}
