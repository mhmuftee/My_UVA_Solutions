#include<iostream>
using namespace std;
int main() {
    int i=0,n;
    while(1) {
        cin>>n;
        if(n==0) break;
        i++;
        cout<<"Case "<<i<<": "<<n/2<<endl;
    }
    return 0;
}
