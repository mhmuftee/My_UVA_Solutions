#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int save [110][110];

    int N,i,v,x,c,l,M;
    i=v=x=c=l=0;
    for( M=1; M<=100; M++)
    {
        N=M;
        while(N)
        {
            if(N>=100)
            {
                c+=1;
                N-=100;
            }
            else if(N>=90)
            {
                x+=1;
                c+=1;
                N-=90;
            }
            else if(N>=50)
            {
                l+=1;
                N-=50;
            }
            else if(N>=40)
            {   x+=1;
                l+=1;
                N-=40;
            }
            else if(N>=10)
            {
                x+=1;
                N-=10;
            }
            else if(N>=9)
            {
                x+=1;
                i+=1;
                N-=9;
            }
            else if(N>=5)
            {
                v+=1;
                N-=5;
            }
            else if(N>=4)
            {
                v+=1;
                i+=1;
                N-=4;
            }
            else if(N>=1)
            {
                i+=1;
                N-=1;
            }
        }

        save[M][0]=i;
        save[M][5]=v;
        save[M][2]=x;
        save[M][3]=l;
        save[M][4]=c;
    }
    while(scanf("%d",&N)==1 && N)
    {
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",N,save[N][0],save[N][5],save[N][2],save[N][3],save[N][4]);
    }
    return 0;
}

