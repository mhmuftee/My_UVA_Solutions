#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)

{
    string s;
    int i,j,R,C,M,N;
    int count[27];
    int kase;

    scanf("%d",&kase);

    for(int k=1; k<=kase; k++)
    {
        for(j=0; j<=26; j++)
            count[j]=0;
        scanf("%d %d %d %d",&R,&C,&M,&N);

        for(i=0; i<R; i++)
        {   cin>>s;
            for(int l=0; l<s.size(); l++)
            {   int n=s[l];
                count[n-64]++;
            }
        }
        int max=0;
        for(j=1; j<=26; j++)
            if(count[j]>max)
                max=count[j];

        int co=0;
        for(j=1; j<=26; j++)
            if(count[j]==max)
                co++;
        if(co)
            max=max*co;
        int min=R*C-max;

        int result=max*M+min*N;

        printf("Case %d: %d\n",k,result);

    }

    return 0;
}
