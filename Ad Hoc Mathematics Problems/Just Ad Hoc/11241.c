#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    double H,T,D,a,b,e,h,c,i,f;
    char ch1[3],ch2[2];
    while(scanf("%s",ch1)!=EOF)
    {
        if(strcmp(ch1,"E")==0)break;
        scanf("%lf %s %lf",&a,ch2,&b);
        if(strcmp(ch1,"D")==0 && strcmp(ch2,"T")==0)
        {
            D=a;
            T=b;
            e = 6.11 * exp (5417.7530 * ((1/273.16) - (1/(D+273.16))));
            h = (0.5555)*(e - 10.0);
            H=T+h;
        }
        if(strcmp(ch1,"D")==0 && strcmp(ch2,"H")==0)
        {
            D=a;
            H=b;
            e = 6.11 * exp (5417.7530 * ((1/273.16) - (1/(D+273.16))));
            h = (0.5555)*(e - 10.0);
            T=H-h;
        }
        if(strcmp(ch1,"H")==0 && strcmp(ch2,"T")==0)
        {
            H=a;
            T=b;
            h=H-T;
            e=(h/.5555)+10.0;
            c=log(e/6.11);
            i=c/5417.7530;
            f=(1/273.16)-i;
            D=(1/f)-273.16;
        }
        if(strcmp(ch1,"H")==0 && strcmp(ch2,"D")==0)
        {
            H=a;
            D=b;
            e = 6.11 * exp (5417.7530 * ((1/273.16) - (1/(D+273.16))));
            h = (0.5555)*(e - 10.0);
            T=H-h;
        }
        if(strcmp(ch1,"T")==0 && strcmp(ch2,"D")==0)
        {
            T=a;
            D=b;
            e = 6.11 * exp (5417.7530 * ((1/273.16) - (1/(D+273.16))));
            h = (0.5555)*(e - 10.0);
            H=T+h;
        }
        if(strcmp(ch1,"T")==0 && strcmp(ch2,"H")==0)
        {
            T=a;
            H=b;
            h=H-T;
            e=(h/.5555)+10.0;
            c=log(e/6.11);
            i=c/5417.7530;
            f=(1/273.16)-i;
            D=(1/f)-273.16;
        }

        printf("T %.1lf D %.1lf H %.1lf\n",T,D,H);
        H=0;
        T=0;
        D=0;
        e=0;
        h=0;
        c=0;
        i=0;
        f=0;

    }

    return 0;
}
