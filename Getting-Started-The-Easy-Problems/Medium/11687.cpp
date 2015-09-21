#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int i,len,n=0;
    string s;
    while(cin>>s)
    {
        if(s=="END")
            break;

        if(s=="1")
        {
            printf("1\n");
            continue;
        }

        len=s.size();

        n=len;
        string ss;
        for(i=1;; i++)
        {
            len=n;
            string ss;
            while(n)
            {
                ss.push_back(n%10+48);
                n/=10;
            }
            n=ss.size();
            if(len==n)break;
        }
        printf("%d\n",i+1);

    }

    return 0;
}
