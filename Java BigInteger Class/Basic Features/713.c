#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{

    string a,b,c;

    int cas;

    cin>>cas;

    while(cas--) {

        cin>>a>>b;
        int min_len;
        if(a.size()>=b.size())
        {
            min_len=b.size();
        }
        else
        {
            c=a;
            a=b;
            b=c;
            min_len=b.size();
        }
        c.clear();

        int carry=0;
        for(int i=0; i<min_len; i++)
        {
            int s=a[i]-48+b[i]-48;
            if(carry)
            {   s=s+carry;
                if(s>=10)
                    carry=s/10;
                else carry=0;
                c.push_back(s%10+48);
            }
            else
                c.push_back(s%10+48);
            if(s>=10) carry=s/10;
            else carry=0;
        }

        for(int i=min_len; i<a.size(); i++)
        {
            int s=a[i]-48+carry;
            if(s>=10)carry=s/10;
            else  carry=0;
            c.push_back(s%10+48);
        }

        if(carry)
            c.push_back(carry+48);

        int start;
        for(int i=0; i<c.size(); i++)
            if(c[i]>'0') {
                start=i;
                break;
            }

        for(int i=start; i<c.size(); i++)
            cout<<c[i];
        cout<<endl;
    }

    return 0;
}
