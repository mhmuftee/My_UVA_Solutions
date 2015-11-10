#include<stdio.h>
#include<string.h>
struct node
{
    char a[102];
};

typedef struct node string;
int main()
{
    string s[102];
    int i,j,n,m,count=0;
    for(i=0; i<101; i++)
        for(j=0; j<101; j++)
            s[i].a[j]=' ';

    m=0;

    while(gets(s[count].a))
    {
        n=strlen(s[count].a);
        if(n>m)m=n;
        count++;
    }
    for(i=0; i<m; i++)
    {
        for(j=count-1; j>=0; j--)
            if(!(s[j].a[i]))
                printf(" ");
            else
                printf("%c",s[j].a[i]);
        printf("\n");
    }
    return 0;
}
