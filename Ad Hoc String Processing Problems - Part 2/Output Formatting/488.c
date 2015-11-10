#include<stdio.h>
void star(int n)
{
    int a,b;
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=a; b++)
            printf("%d",a);
        printf("\n");
    }
    for(a=1; a<=(n-1); a++)
    {
        for(b=1; b<=(n-a); b++)
            printf("%d",(n-a));
        printf("\n");
    }
    printf("\n");
}
void starn(int n)
{
    int a,b;
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=a; b++)
            printf("%d",a);
        printf("\n");
    }
    for(a=1; a<=(n-1); a++)
    {
        for(b=1; b<=(n-a); b++)
            printf("%d",(n-a));
        printf("\n");
    }
}
int main()
{
    int n,a,b,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        a=b=0;
        scanf("%d %d",&a,&b);

        for(j=1; j<=b; j++)
        {
            if(i==n && j==b)
                starn(a);
            else
                star(a);
        }
    }
    return 0;
}
