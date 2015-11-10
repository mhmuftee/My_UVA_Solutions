#include<stdio.h>
#include<string.h>
struct irregular
{
    char sin[100];
    char plu[100];
};
struct nam
{
    char s[100];
};
typedef struct irregular irr;
typedef struct nam strg;



int main() {

    irr ir[20];
    char s[100];
    strg str[100];
    int n,m,i,j,len,k;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
        scanf("%s %s",ir[i].sin,ir[i].plu);
    for(i=0; i<m; i++)
        scanf("%s",str[i].s);




    for(i=0; i<m; i++)
    {
        len=strlen(str[i].s);
        for(j=0; j<n; j++)
            if(strcmp(str[i].s,ir[j].sin)==0) {
                str[i].s[len-2]='0';
                k=j;
            }
        if(str[i].s[len-2]=='0')
            printf("%s\n",ir[k].plu);
        else
        {


            if(str[i].s[len-1]=='y')
            {
                if(str[i].s[len-2]=='a' || str[i].s[len-2]=='e'|| str[i].s[len-2]=='i'||str[i].s[len-2]=='o'||str[i].s[len-2]=='u')
                    printf("%ss\n",str[i].s);
                else
                {   str[i].s[len-1]='i';
                    printf("%ses\n",str[i].s);
                }
            }
            else if(str[i].s[len-1]=='o'||str[i].s[len-1]=='s'||str[i].s[len-1]=='x')
                printf("%ses\n",str[i].s);
            else if(str[i].s[len-1]=='h')
            {
                if(str[i].s[len-2]=='c'||str[i].s[len-2]=='s')
                    printf("%ses\n",str[i].s);
            }
            else
                printf("%ss\n",str[i].s);
        }
    }
    return 0;
}
