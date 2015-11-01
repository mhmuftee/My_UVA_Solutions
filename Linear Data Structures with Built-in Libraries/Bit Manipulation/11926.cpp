#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

bool chek [1000010];
int start,End,repeat,n,m;

bool Check()
{
    for(int i=start; i<End; i++)
    {
        if(chek[i]) return false;
        chek[i]=true;
    }
    return true;
}

int main()
{
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0) break;
        int conflict=0;

        memset(chek,0,sizeof(chek));

        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&start,&End);
            if(!conflict && !Check()) conflict=1;
        }


        for(int i=0; i<m; i++)
        {
            scanf("%d %d %d",&start,&End,&repeat);

            while(!conflict && start<=1000000)
            {
                if(!Check()) conflict=1;

                start+=repeat;
                End = min (End+repeat,1000000);
            }
        }

        if(conflict)
            printf("CONFLICT\n");
        else
            printf("NO CONFLICT\n");
    }
    return 0;
}
