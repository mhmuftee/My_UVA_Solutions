#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
struct node
{
    int contestent_id,problem_number,time;
} arr[105];
bool cmp(node a,node b)
{
    if(a.problem_number!=b.problem_number)
        return a.problem_number>b.problem_number;
    else if(a.time!=b.time)
        return a.time<b.time;
    else
        return a.contestent_id<b.contestent_id;
}


int main()
{
    int i,j,k=0,cas,con_id,prob_id,sub_time;
    char L,s[100];
    scanf("%d",&cas);
    getchar();
    getchar();
    while(cas--)
    {
        int submit[105]= {0};
        int time[105][12];
        memset(time,-1,sizeof(time));
        int pty_time[105][12]= {0};
        while(gets(s))
        {
            if(s[0]=='\0')
                break;
            sscanf(s,"%d %d %d %c",&con_id,&prob_id,&sub_time,&L);
            submit[con_id]++;

            if(L=='I')
                pty_time[con_id][prob_id]++;
            if(L=='C')
            {
                if(time[con_id][prob_id]==-1)
                    time[con_id][prob_id]=sub_time+pty_time[con_id][prob_id]*20;

            }

        }
        int n=0;
        for(i=1; i<=100; i++)
        {
            if(submit[i])
            {
                int b=i;
                int p_numrs=0,Atime=0;
                for(j=1; j<=9; j++)
                {
                    if(time[i][j]!=-1)
                    {
                        p_numrs++;
                        Atime+=time[i][j];
                    }
                }
                arr[n].contestent_id=b;
                arr[n].problem_number=p_numrs;
                arr[n].time=Atime;
                n++;
            }
        }

        sort(arr,arr+n,cmp);
        if(k)
            printf("\n");
        k++;
        for(i=0; i<n; i++)
            printf("%d %d %d\n",arr[i].contestent_id,arr[i].problem_number,arr[i].time);
    }


    return 0;
}
