#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char s[1000000],t[1000000];

    while(scanf("%s %s",s,t)==2)
    {
        long n,m,count=0,check=0,co=0;
        n=strlen(s);
        m=strlen(t);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                if(s[i]==t[j])
                {
                    if(check<=j)
                    {   count++;
                        check=j;
                        t[j]=' ';
                        break;
                    }
                }
        }

        if(count==n)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
