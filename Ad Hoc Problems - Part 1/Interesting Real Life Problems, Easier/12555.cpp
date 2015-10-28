#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char s[100];

    int cas;
    scanf("%d",&cas);
    for(int ii=1; ii<=cas; ii++)
    {
        scanf("%s",s);
        int a,b;
        sscanf(s,"%d %d",&a);
        b=0;
        for(int i=0; i<strlen(s); i++)
            if(s[i]>='0' && s[i]<='9')
                b=b*10+(s[i]-48);

        if(a==b) b=0;
        else
        {
            b=b%10;
        }

        int  res=(a*50+b*5);

        int count=0,result=res;

        while(result)
        {
            if(result%10==0)count++;
            result/=10;
        }
        printf("Case %d: ",ii);
        if(count==2) printf("%.0lf\n",res/100.0);
        else if(count==1) printf("%.1lf\n",res/100.0);
        else printf("%.2lf\n",res/100.0);

    }

    return 0;
}
