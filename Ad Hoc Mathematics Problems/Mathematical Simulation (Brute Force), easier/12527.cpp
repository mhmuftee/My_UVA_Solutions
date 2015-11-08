#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int m,n,save[5005]= {0};
    for(int i=1; i<=5000; i++)
    {
        int n=i,f=0,a[10]= {0};
        while(n)
        {
            m=n%10;
            if(a[m])
            {
                f=1;
                break;
            }
            a[m]=1;
            n/=10;
        }
        if(!f)
            save[i]=save[i-1]+1;
        else
            save[i]=save[i-1];
    }

    while(scanf("%d %d",&m,&n)==2)
        printf("%d\n",save[n]-save[m-1]);

    return 0;
}
