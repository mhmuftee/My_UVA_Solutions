#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    string a,b,c;

    int i,j,len,kase;
    scanf("%d",&kase);
    getchar();
    for(int k=1; k<=kase; k++)
    {
        getline(cin,a);

        for(i=0; i<a.size(); i++)
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
                b.push_back(a[i]);

        len=b.size();
        printf("Case #%d:\n",k);

        int n=sqrt(len);

        if(n*n==len)

        {
            c=b;
            reverse(b.begin(),b.end());
            if(b==c)
                printf("%d\n",n);
            else
                printf("No magic :(\n");

        }
        else
            printf("No magic :(\n");
        b.clear();
        a.clear();
        c.clear();
    }


    return 0;
}
