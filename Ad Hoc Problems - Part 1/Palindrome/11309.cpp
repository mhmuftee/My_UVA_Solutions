#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
vector <int> palindrome;
bool is_palindrome(string s)
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

string to_String(int num)
{
    string s;
    while(num)
    {
        s.push_back(num%10+48);
        num=num/10;
    }

    reverse(s.begin(),s.end());

    return s;
}

int main()
{
    int Kas;

    cin>>Kas;

    for(int i=1; i<=2359; i++)
    {
        if(is_palindrome(to_String(i)))
            palindrome.push_back(i);
    }

    while(Kas--)
    {
        string s;
        cin>>s;

        int n=(s[0]-48)*1000+(s[1]-48)*100+(s[3]-48)*10+(s[4]-48)*1;

        if(n>=1551 && n<=1999)  n=2000;
        else if(n>=959 && n<=999) n=1000;
        else if(n>=858 && n<=899) n=900;
        else if(n>=757&& n<=799) n=800;
        else if(n>=656&& n<=699) n=700;
        else if(n>=555&& n<=599) n=600;
        else if(n>=454&& n<=499) n=500;
        else if(n>=353&& n<=399) n=400;
        else if(n>=252&& n<=299) n=300;
        else if(n>=151&& n<=199) n=200;
        else if (n>=55 && n<=99) n=100;

        vector<int>::iterator it;
        it=upper_bound(palindrome.begin(),palindrome.end(),n);

        int m=palindrome[it-palindrome.begin()];

        s="0000";

        int index=0;
        while(m)
        {
            s[index++]=m%10+48;
            m=m/10;
        }
        reverse(s.begin(),s.end());
        cout<<s[0]<<s[1]<<":"<<s[2]<<s[3]<<endl;
    }

    return 0;
}
