#include<iostream>
#include<string>
#include<sstream>
#include<cstdio>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string s;
    getline(cin, s);
    getline(cin, s);
    for(int i = 1; i <= T; i++) {
        cout << "Case #" << i << ":" << endl;
        while(getline(cin, s)) {
            if(s == "") {
                break;
            }
            istringstream sin(s);
            string w;
            for(int j = 0; sin >> w;)
                if(j < w.size())
                    cout << w[j++];
            cout<<endl;
        }
        if(i<T)
            cout << endl;
    }
    return 0;
}
