#include<stdio.h>
#include<string.h>

char a[122];
void print(int n)
{
    int i;
    for(i=n-1; i>=0; i--)
        printf("%c",a[i]);
}
int main()
{
    char c;
    int i,j,n;
    while(scanf("%s%c",&a,&c)!=EOF)
    {
        n=0;
        n=strlen(a);
        print(n);
        printf("%c",c);
    }
    return 0;
}
