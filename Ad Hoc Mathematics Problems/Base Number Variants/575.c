#include<stdio.h>
int main()
{
    char a[1000];
    int n,i,s=0;
    while (scanf("%s",a))
    {
        if (a[0]==48)break;
        n=strlen(a);
        for (i=0; i<n; i++)
        {
            a[i]-=48;
            s+=(a[i]*(pow(2,(n-i))-1));
        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
