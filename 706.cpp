#include<cstdio>
#include<cstring>
using namespace std;
void printv(int j,int m,int n,int s,int len)
{
    int i;
    printf(" ");
    if(n==1||(n==4 && (m==1|| m==(2*s+3)))|| (n==7 && (m==((2*s+3)/2+1)|| m==(2*s+3)))||(n==0 && m==((2*s+3)/2+1)))
        for(i=1; i<=s; i++)
            printf(" ");
    else
        for(i=1; i<=s; i++)
            printf("-");
    printf(" ");
    if(j<len-1)
        printf(" ");

}
void printm(int j,int m,int n,int s,int len)
{
    int i,a=2*s+3;
    if(m<(a/2+1))
    {
        if(n==1 || n==7 || n==2 || n==3 )
            printf(" ");
        else
            printf("|");
        for(i=1; i<=s; i++)
            printf(" ");
        if(n==5 || n==6)
            printf(" ");
        else
            printf("|");
    }
    if(m>(a/2+1))
    {
        if(n==1 || n==9 || n==4 || n==3 || n==5 || n==7)
            printf(" ");
        else
            printf("|");
        for(i=1; i<=s; i++)
            printf(" ");
        if(n==2)
            printf(" ");
        else
            printf("|");
    }
    if(j<len-1)
        printf(" ");
}

int main()
{
    int i,j,k,s;
    char ass[15];

    while(scanf("%d %s",&s,&ass)==2)
    {
        if(s==0 && ass[0]=='0')
            break;
        int n=2*s+3;
        int len=strlen(ass);

        for(i=1; i<=n; i++)
        {

            for(j=0; j<len; j++)
            {
                if(i==1 || i==(n/2+1) || i==n)
                    printv(j,i,ass[j]-48,s,len);
                else
                    printm(j,i,ass[j]-48,s,len);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

