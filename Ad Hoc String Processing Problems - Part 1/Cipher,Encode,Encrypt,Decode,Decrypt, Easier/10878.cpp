#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;

int main(void)

{

    string a,b;

    while(getline(cin,a))
    {
        for(int i=a.size()-1; i>=0; i--)
        {

            if(a[i]=='o')
                b.push_back('1');
            if(a[i]==' ')
                b.push_back('0');
        }
        int s=0;
        for(int i=0; i<b.size(); i++)
            s=s+(b[i]-48)*pow(2,i);
        if(s)
            printf("%c",s);

        b.clear();
        a.clear();

    }


    return 0;
}
