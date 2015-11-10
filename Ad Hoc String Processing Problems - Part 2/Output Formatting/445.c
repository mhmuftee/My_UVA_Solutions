#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x=0,n;
    char a[200];
    while(gets(a))
    {
        n=strlen(a);
        x=0;
        for(i=0; i<n; i++)
        {
            if(a[i]=='!')printf("\n");
            else
            {
                if(a[i]>='0'&&a[i]<='9')
                {
                    x+=(a[i]-48);
                }
                else if(a[i]>='A'&&a[i]<='Z')
                {
                    for(j=1; j<=x; j++)printf("%c",a[i]);
                    x=0;
                }
                else if(a[i]=='b')
                {
                    for(j=1; j<=x; j++)printf(" ");
                    x=0;
                }
                else if(a[i]=='*')
                {
                    for(j=1; j<=x; j++)printf("*");
                    x=0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
