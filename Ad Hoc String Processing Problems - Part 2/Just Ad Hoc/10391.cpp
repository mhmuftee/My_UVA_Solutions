#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>

using namespace std;

vector <string> dictionary;
map <string ,int > indexingfront;


int main()
{
    string s;
    while(cin>>s)
    {
        dictionary.push_back(s);
        if(!indexingfront[s])
            indexingfront[s]=1;
    }

    int Size=dictionary.size();
    for(int i=0; i<Size; i++)
    {
        int SIZE=dictionary[i].size();
        for(int j=1; j<SIZE; j++)
        {

            string first=dictionary[i].substr(0,j);
            string second=dictionary[i].substr(j,SIZE-1);

            if(indexingfront[first] && indexingfront[second])
            {
                cout<<dictionary[i]<<endl;
                break;
            }

        }
    }
    return 0;
}
