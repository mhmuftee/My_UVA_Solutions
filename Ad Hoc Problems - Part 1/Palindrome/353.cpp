#include<string>
#include<map>
#include<cstdio>
#include<iostream>

using namespace std;
map <string , int> in;
bool palindrome(string s)
{
    int c=0,len=s.size();
    for(int i=0; i<len/2; i++)
        if(s[i]==s[len-1-i])
            c++;
    if(c==len/2)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    string s,ss;
    while(cin>>s)
    {
        int len=s.size();
        in.clear();
        int count=0;
        for(int i=1; i<=len; i++)
            for(int j=0; j<len-i+1; j++)
            {
                ss.clear();
                ss=s.substr(j,i);
                if(palindrome(ss))
                {   if(!in[ss])
                        count++;
                    in[ss]=1;
                }
            }
        printf("The string '%s' contains %d palindromes.\n",s.c_str(),count);
    }
    return 0;
}
