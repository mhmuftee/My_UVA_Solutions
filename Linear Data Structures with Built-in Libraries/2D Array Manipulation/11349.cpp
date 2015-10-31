#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int T,N;
    long long Array[105][105];

    scanf("%d",&T);

    char s[100];

    for(int k=1; k<=T; k++)
    {
        getchar();
        gets(s);
        char ch;
        sscanf(s,"%c %c %d",&ch,&ch,&N);

        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
                scanf("%lld",&Array[i][j]);

        int coun=0;

        for(int i=1,l=N; i<=N; i++,l--)
        {
            for(int j=1,k=N; j<=N; j++,k--)
                if(Array[i][j]==Array[l][k] && Array[i][j]>=0)coun++;

        }

        if(N*N==coun)
            printf("Test #%d: Symmetric.\n",k);
        else
            printf("Test #%d: Non-symmetric.\n",k);
    }

    return 0;
}
