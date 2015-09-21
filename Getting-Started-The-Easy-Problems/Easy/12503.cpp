#include<cstdio>
#include<cstring>

using namespace std;


int main()
{

    //freopen("in.txt","r",stdin);


    int cas;

    scanf("%d",&cas);


    while(cas--)
    {
        int Kas;
        scanf("%d",&Kas);

        getchar();

        int arr[1000];

        char s[1000];

        for(int i=0;i<Kas;i++){
        gets(s);


        char s1[10],s2[10];
        int m=1;

        sscanf(s,"%s %s %d",s1,s2,&m);

        arr[i]=arr[m-1];
        if(strcmp(s,"LEFT")==0)
            arr[i]=-1;

        if(strcmp(s,"RIGHT")==0)
                arr[i]=1;



        }

        int sum=0;

        for(int i=0;i<Kas;i++)
            sum+=arr[i];

        printf("%d\n",sum);

    }

    return 0;
}
