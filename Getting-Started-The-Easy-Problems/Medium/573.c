#include<stdio.h>
int main()
{
    int day,k,g;
    int  H,U,D,F,Dayclimb,initial_hight;
    while(scanf("%d",&H)==1)
    {
        Dayclimb=0;
        day=0;
        k=0;
        g=0;
        if(H==0) break;
        scanf("%d %d %d",&U,&D,&F);
        F=F*U;
        H=H*100;
        U=U*100;
        D=D*100;


        while(1)
        {
            day++;


            if(U>=0)
                Dayclimb=Dayclimb+U;
            if(Dayclimb>H)
            {
                k=1;
                break;
            }
            Dayclimb=Dayclimb-D;
            if(Dayclimb<0)
            {
                g=1;
                break;
            }
            U=U-F;

        }
        if(g==1)
            printf("failure on day %d\n",day);
        if(k==1)
            printf("success on day %d\n",day);

    }

    return 0;

}
