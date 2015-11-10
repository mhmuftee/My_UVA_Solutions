#include<stdio.h>
#include<string.h>
struct s
{
    char s[102];
};
typedef struct s str;
int main(void)
{
    char a[1000],b[1000],c[1000];
    int i,j,n,count=0,len;
    char ch1='"',ch2='\\',ch3='"';
    str sr[105];

    while(scanf("%d",&n)==1 && n)
    {
        count++;
        getchar();
        for(i=0; i<n; i++)
            gets(sr[i].s);

        printf("Case %d:\n",count);
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n{\n");

        for(i=0; i<n; i++)
        {
            len=strlen(sr[i].s);
            printf("printf(%c",ch1);
            for(j=0; j<len; j++)
            {
                if(sr[i].s[j]=='"' || sr[i].s[j]=='\\')
                    printf("\\");
                printf("%c",sr[i].s[j]);
            }
            printf("%cn%c);",ch2,ch3);
            printf("\n");

        }

        printf("printf(%c%cn%c);\n",ch1,ch2,ch3);
        printf("return 0;\n}\n");

    }

    return 0;
}
