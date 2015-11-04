#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
struct node
{
    char s[10];
    int y;
} arr[30300];
int main()
{
    char s[11];
    int i,j,k,l,m,n=0,N;
    for(i='0'; i<='9'; i++)
    {
        for(j='0'; j<='9'; j++)
        {

            for(k='0'; k<='9'; k++)
            {

                for(l='0'; l<='9'; l++)
                {
                    for(m='0'; m<='9'; m++)
                    {
                        int bal[110]= {0};
                        bal[i]++;
                        bal[j]++;
                        bal[k]++;
                        bal[l]++;
                        bal[m]++;
                        int count=0;
                        for(int x='0'; x<='9'; x++)
                            if(bal[x]==1)
                                count++;

                        if(count==5)
                        {
                            s[0]=i;
                            s[1]=j;
                            s[2]=k;
                            s[3]=l;
                            s[4]=m;
                            s[5]='\0';
                            strcpy(arr[n].s,s);
                            arr[n].y=atoi(s);
                            n++;
                        }
                    }
                }
            }
        }
    }
    int newline=0;
    while(scanf("%d",&N)==1 && N)
    {
        int ache=0;
        if(newline)
            printf("\n");
        for(i=0; i<n; i++)
        {
            int bal[11]= {0};
            for(j=0; j<5; j++)
            {
                bal[arr[i].s[j]-48]++;
            }
            int a=arr[i].y*N;

            int x=a;
            while(x)
            {
                bal[x%10]++;
                x/=10;
            }
            int count=0;
            for(k=0; k<=9; k++)
                if(bal[k]==1)
                    count++;
            if(count==10)
            {
                ache=1;
                printf("%d / %s = %d\n",a,arr[i].s,N);
            }

        }
        if(!ache)
            printf("There are no solutions for %d.\n",N);
        newline++;
    }
    return 0;
}
