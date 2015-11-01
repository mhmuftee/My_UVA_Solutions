#include<cstdio>
#include<vector>
#include<sstream>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,cas,kas,edge;
    string s;
    scanf("%d",&kas);

    while(kas--)
    {
        scanf("%d",&edge);
        getchar();
        int outdegree[1005]= {0};
        int min=100000;

        for(i=1; i<=edge; i++)
        {
            getline(cin,s);
            stringstream ss( s );
            int num;
            int v=0;
            while( ss >> num )
                v++;
            outdegree[i]=v;
            if(outdegree[i]<min)
                min=outdegree[i];
        }

        bool space=false;

        for(i=1; i<=edge; i++)
            if(min==outdegree[i])
            {
                if(space)
                    printf(" ");
                printf("%d",i);
                space=true;
            }
        printf("\n");
    }
    return 0;
}
