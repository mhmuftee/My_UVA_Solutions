#include<stdio.h>
int main()
{
    int H,M,a,b,m,i,n;

    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        n=0;
        H=0;
        M=0;
        a=0;
        b=0;
        scanf("%d:%d",&H,&M);

        n=720-H*60-M;
        if(n<0)a=11;
        else if(n<60)a=12;
        else
            a=n/60;
        b=60-M;
        if(b==60)b=0;


        if(a<10)
            printf("0%d:",a);
        else
            printf("%d:",a);
        if(b<10)
            printf("0%d\n",b);
        else
            printf("%d\n",b);
    }
    return 0;
}
