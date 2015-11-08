#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,a;
    float b,c,d,s,n,u,v,t;
    while (scanf("%d",&a)!=EOF)
    {
        i++;
        if(a==0)
            break;
        if(a==1)
        {
            scanf("%f %f %f",&b,&c,&d);
            u=b;
            v=c;
            t=d;


            n=(v-u)/t;
            s=u*t+.5*n*t*t;
            printf("Case %d: %.3f %.3f\n",i,s,n);
        }
        else if(a==2)
        {
            scanf("%f %f %f",&b,&c,&d);
            u=b;
            v=c;
            n=d;
            t=(v-u)/n;
            s=u*t+.5*n*t*t;
            printf("Case %d: %.3f %.3f\n",i,s,t);
        }
        else if(a==3)
        {
            scanf("%f %f %f",&b,&c,&d);
            u=b;
            n=c;
            s=d;
            v=sqrt(u*u+2*n*s);
            t=(v-u)/n;
            printf("Case %d: %.3f %.3f\n",i,v,t);
        }
        else if(a==4)
        {
            scanf("%f %f %f",&b,&c,&d);
            v=b;
            n=c;
            s=d;
            u=sqrt(v*v-2*n*s);
            t=(v-u)/n;
            printf("Case %d: %.3f %.3f\n",i,u,t);
        }
    }
    return 0;
}
