#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,j,k,n,m,cas;
    char v[5]= {'a','e','i','o','u'};
    scanf("%d",&cas);
    for(i=0; i<cas; i++)
    {
        scanf("%s",s1);
        scanf("%s",s2);
        n=strlen(s1);
        m=strlen(s2);
        if(m==n)
        {
            for(j=0; j<n; j++)
                for(k=0; k<5; k++)
                    if(s1[j]==v[k])
                        s1[j]='a';

            for(j=0; j<n; j++)
                for(k=0; k<5; k++)
                    if(s2[j]==v[k])
                        s2[j]='a';

            if(strcmp(s1,s2)==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
