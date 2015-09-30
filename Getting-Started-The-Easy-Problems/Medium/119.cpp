#include<cstdio>
#include<map>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {

    int Kase,give;
    string s;
    int line =0;

    while(scanf("%d",&Kase)==1)
    {
        if(line)cout<<endl;
        line++;
        map<string,int> indexing;
        vector<string>dictionary;

        for(int i=0; i<Kase; i++) {
            cin>>s;
            indexing[s]=0;
            dictionary.push_back(s);
        }

        for(int i=0; i<Kase; i++)
        {
            cin>>s;

            int amount;
            cin>>amount;

            indexing[s]-=amount;
            int num_of_people;
            cin>>num_of_people;

            if(num_of_people)
                give=amount/num_of_people;

            for(int j=0; j<num_of_people; j++)
            {
                string ss;
                cin>>ss;
                indexing[ss]+=give;
                amount-=give;
            }
            indexing[s]+=amount;
        }

        for(int i=0; i<dictionary.size(); i++)
            cout<<dictionary[i]<<" "<<indexing[dictionary[i]]<<endl;
    }

    return 0;
}
