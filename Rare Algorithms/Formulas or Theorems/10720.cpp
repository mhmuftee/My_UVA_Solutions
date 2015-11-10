#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a,int b)
{
    if(a>b)
        return 1;
    else
        return 0;
}

int main()
{
    int i,j,k,n;
    vector<int> s;

    while(scanf("%d",&n)==1 && n)
    {
        s.clear();
        int odd=0,notgraph=0;
        for(i=0; i<n; i++)
        {   cin>>j;
            s.push_back(j);
            if(s[i]%2)
                odd++;
            if(s[i]>n-1 || s[i]<0)
                notgraph=1;
        }
        if(!notgraph)
            if(odd%2)
                notgraph=1;

        while(!notgraph)
        {
            int ss=0;
            for(i=0; i<s.size(); i++)
                if(s[i]==0)
                    ss++;
            if(ss==s.size())
            {
                printf("Possible\n");
                break;
            }
            sort(s.begin(),s.end(),cmp);

            int loop=s[0];
            s.erase(s.begin()+0);
            for(i=0; i<loop; i++)
                s[i]--;

            for(i=0; i<s.size(); i++)
                if(s[i]<0)
                {
                    notgraph=1;
                }
        }
        if(notgraph)
            printf("Not possible\n");
    }
    return 0;
}
