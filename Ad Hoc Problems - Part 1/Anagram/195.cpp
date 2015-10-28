#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(char a,char b)
{
    char z=toupper(a);
    char e=toupper(b);
    if(z!=e)
        return z<e;
    else
        return a<b;

}
int main()
{
    string s;
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        cin>>s;
        sort(s.begin(),s.end(),cmp);
        do
        {
            cout<<s<<endl;
        } while(next_permutation(s.begin(),s.end(),cmp));

    }
    return 0;
}
