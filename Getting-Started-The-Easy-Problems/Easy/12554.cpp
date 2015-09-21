#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

vector<string> song;


int main()
{

    //freopen("in.txt","r",stdin);

    //printf("%d\n");

    song.push_back("Happy");
    song.push_back("birthday");
    song.push_back("to");
    song.push_back("you");
    song.push_back("Happy");
    song.push_back("birthday");
    song.push_back("to");
    song.push_back("you");
    song.push_back("Happy");
    song.push_back("birthday");
    song.push_back("to");
    song.push_back("Rujia");
    song.push_back("Happy");
    song.push_back("birthday");
    song.push_back("to");
    song.push_back("you");

    vector<string>person;


    int cas;

    scanf("%d",&cas);

    int iter=0;
        iter=cas/16;
    if(cas%16) iter++;

    //printf("%d\n",iter);

    string s;
    for(int i=0;i<cas;i++)
    {
        cin>>s;
        person.push_back(s);
    }

    for(int i=0;i<16*iter;i++)
    {
        cout<<person[i%cas]<<": "<<song[i%16]<<endl;
    }






    return 0;
}
