#include<stdio.h>

void d2b(int a)
{
    int q[20],i;
    for(i=1; i<14; i++)
    {
        q[i]=a%2;
        a/=2;
    }
    for(i=13; i>0; i--)printf("%d",q[i]);
    printf(" ");
}

int main()
{
    int p,q,r,s;
    char a[10];
    scanf("%d",&s);
    while(s--)
    {
        scanf("%X %s %X",&p,a,&q);
        d2b(p);
        printf("%s ",a);
        d2b(q);
        if(a[0]=='+')r=p+q;
        else r=p-q;
        printf("= %d\n",r);
    }

    return 0;
}
