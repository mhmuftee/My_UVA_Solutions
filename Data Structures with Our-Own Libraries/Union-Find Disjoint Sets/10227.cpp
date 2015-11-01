#include<cstdio>
#include<map>
#include<set>
using namespace std;

int main()
{
    int Kas,P,T,a,b;
    scanf("%d",&Kas);
    getchar();
    getchar();
    char inp[100];
    set<int>Graph[100];
    map<set<int>,int> ind;

    int n=0;
    while(gets(inp))
    {

        if(inp[0]=='\0')
        {
            for(int i=1; i<=P; i++)
            {
                if(!ind[Graph[i]])
                    ind[Graph[i]]=1;
            }
            printf("%d\n\n",ind.size());
            n=0;
            for(int i=0; i<100; i++)
                Graph[i].clear();
            ind.clear();
        }
        else
        {
            if(!n)
                sscanf(inp,"%d %d",&P,&T);

            if(n)
            {
                sscanf(inp,"%d %d\n",&a,&b);
                Graph[a].insert(b);
            }
            n++;
        }
    }

    for(int i=1; i<=P; i++)
    {
        if(!ind[Graph[i]])
            ind[Graph[i]]=1;
    }

    printf("%d\n",ind.size());

    return 0;
}
