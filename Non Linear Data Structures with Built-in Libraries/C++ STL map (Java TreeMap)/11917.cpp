#include<stdio.h>
#include<string.h>
struct homework {
    char s_name[100];
    int a;

};

typedef struct homework h;
int main() {

    h hw[100];
    int i,j,flag,kase,n,K,kase2,check;
    char s_d[100];
    scanf("%d",&kase);
    for(i=0; i<kase; i++)
    {   K=0;
        scanf("%d",&kase2);
        for(j=0; j<kase2; j++)
        {
            scanf("%s %d",&hw[j].s_name,&hw[j].a);
        }
        scanf("%d %s",&n,&s_d);

        flag=0;
        for(j=0; j<kase2; j++)
            if(strcmp(hw[j].s_name,s_d)==0)
            {
                flag=1;
                check=j;
                break;
            }
        if(flag==0)
            printf("Case %d: Do your own homework!\n",i+1);
        else {
            if(hw[check].a<=n)
                printf("Case %d: Yesss\n",i+1);
            else if(hw[check].a<=n+5)
                printf("Case %d: Late\n",i+1);
            else
                printf("Case %d: Do your own homework!\n",i+1);
        }
    }
    return 0;
}

