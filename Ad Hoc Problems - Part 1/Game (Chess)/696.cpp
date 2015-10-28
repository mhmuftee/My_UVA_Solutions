#include<cstdio>
#include<cstring>
#include<string>

using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else return b;
}
int main()
{
    int r,c,count;
    while(scanf("%d %d",&r,&c)==2 && r && c)
    {
        count=0;
        if(r==1 || c==1)
            count=max(r,c);
        else if(r==2 || c==2)
        {
            int x=max(r,c);
            if(x%4==0 )
                count=x;
            else if(x%2==0)
                count=x+2;

            if(x%2)
                count=x+1;
        }
        else count=(r*c+1)/2;

        printf("%d knights may be placed on a %d row %d column board.\n",count,r,c);
    }
    return 0;
}
