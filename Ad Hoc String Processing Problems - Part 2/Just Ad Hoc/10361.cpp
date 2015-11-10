#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
using namespace std;

int main()
{

    vector<char>aa,bb,cc,dd;
    char a[1000],b[1000];
    int cas,i,j;

    scanf("%d",&cas);
    getchar();
    while(cas--)
    {
        gets(a);
        gets(b);
        int count=0,co=0;
        for(i=0; a[i]!=0;)
        {
            if(a[i]=='<')
                while(1)
                {
                    i++;
                    if(a[i]=='>')
                    {
                        count=1;
                        break;
                    }
                    if(count==0)
                        aa.push_back(a[i]);
                    else
                        bb.push_back(a[i]);
                }
            else if(a[i]=='>')
                while(1)
                {
                    i++;
                    if(a[i]=='<')
                    {
                        co=1;
                        break;
                    }
                    if(a[i]=='\0')
                    {
                        break;
                    }
                    if(co==0)
                        cc.push_back(a[i]);
                    else
                        dd.push_back(a[i]);
                }
            else
                i++;
        }

        for(int k=0; a[k]!=0; k++)
        {
            if(a[k]=='>'||a[k]=='<')continue;
            printf("%c",a[k]);
        }
        printf("\n");
        for(int k=0; b[k]!=0; k++)
            if(b[k]!='.')
                printf("%c",b[k]);




        for(int k=0; k<bb.size(); k++)
            printf("%c",bb[k]);
        for(int k=0; k<cc.size(); k++)
            printf("%c",cc[k]);

        for(int k=0; k<aa.size(); k++)
            printf("%c",aa[k]);
        for(int k=0; k<dd.size(); k++)
            printf("%c",dd[k]);
        printf("\n");

        aa.clear();
        bb.clear();
        cc.clear();
        dd.clear();
    }

    return 0;
}
