#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

string store[120] =
{
    ".-","A",
    ".---","J", "...","S", ".----","1", ".-.-.-",".", "---...",":",
    "-...","B", "-.-","K", "-","T", "..---","2", "--..--",",",
    "-.-.-.",";", "-.-.","C", ".-..","L", "..-","U", "...--","3",
    "..--..","?", "-...-","=", "-..","D", "--","M", "...-","V",
    "....-","4", ".----.","'", ".-.-.","+", ".","E", "-.","N",
    ".--","W", ".....","5", "-.-.--","!", "-....-","-", "..-.","F",
    "---","O", "-..-","X", "-....","6", "-..-.","/", "..--.-","_",
    "--.","G", ".--.","P", "-.--","Y", "--...","7", "-.--.","(",
    ".-..-.","\"", "....","H", "--.-","Q", "--..","Z", "---..","8",
    "-.--.-",")", ".--.-.","@", "..","I", ".-.","R", "-----","0",
    "----.","9", ".-...","&"
};

int main()
{
    map<string,string> indexing;
    string s1,s2;
    for(int i=0; i<=104; i+=2)
    indexing[store[i]]=store[i+1];

    int kase,K ;

    cin>>kase;

    getchar();

    for(int K=1; K<=kase; K++)
    {
        if(K>1) printf("\n");        ;

        string input;

        getline(cin,input);

        cout<<"Message #"<<K<<endl;
        string c,out;

        for(int i=0; i<input.length(); i++)
        {
            if(input[i]!=' ')
                c.push_back(input[i]);

            if(input[i]==' ' || i==input.length()-1)
            {
                if(indexing[c]!="")
                    out.push_back(indexing[c][0]);
                if( input[i+1]==' ')
                {
                    out.push_back(' ');i++;
                }
                c.clear();
            }
        }

        cout<<out<<endl;
        out.clear();

    }
    return 0;
}
