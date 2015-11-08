#include<cstdio>
#include<cstring>

using namespace std;

int findroot (char arr[],char x,int n)
{
    for(int i=0; i<n; i++)
        if(x==arr[i])
            return i;
    return -1;
}

void printpostporder(char in[],char pre[],int n)
{
    int root = findroot(in,pre[0],n);

    if(root!=0)
        printpostporder(in,pre+1,root);

    if(root!=n-1)
        printpostporder(in+root+1,pre+root+1,n-root-1);

    printf("%c",pre[0]);
}

int main()
{
    char pre[100],in[100];

    int n,cas;
    while(scanf("%s %s",pre,in)==2) {
        printpostporder(in,pre, strlen(pre));
        printf("\n");
    }
}

