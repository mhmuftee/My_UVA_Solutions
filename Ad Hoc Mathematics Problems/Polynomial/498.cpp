#include<cstdio>
#include<cmath>
#include<vector>
#include<string>
#include<sstream>.
#include<iostream>
using namespace std;

int main()
{
    string a,b;
    while(getline(cin,a))
    {
        stringstream ss(a);

        int num;
        vector <int> C;

        while(ss>>num) C.push_back(num);

        getline(cin,b);

        stringstream sss(b);

        vector <int> X;

        while(sss>>num) X.push_back(num);

        for(int i=0; i<X.size(); i++)
        {
            long long poly=0;

            for(int j=0; j<C.size(); j++)
                poly+=C[j]*pow(X[i],C.size()-j-1);
            if(i)
                cout<<" ";
            cout<<poly;
        }
        cout<<endl;
    }
    return 0;
}
