#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b;
    int n,m,i,j,k,x;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%s",a);
        printf("Case %d: ",i);
        m=strlen(a);
        x=0;
        b=a[0];
        for(j=1; j<m; j++)
        {
            if(a[j]>64&&a[j]<91)
            {
                for(k=0; k<x; k++)
                    printf("%c",b);
                x=0;
                b=a[j];
            }
            else
            {
                x=x*10;
                x+=(a[j]-48);
            }
        }
        for(k=0; k<x; k++)
            printf("%c",b);
        printf("\n");
    }
    return 0;
}
