#include<stdio.h>
int main()
{
    int n;
    double m1,m2,c1,c2,Px,Py,Dx,Dy,Ax,Ay,Bx,By,Ex,Ey;

    scanf("%d",&n);
    printf("INTERSECTING LINES OUTPUT\n");
    while(n--)
    {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&Dx,&Dy,&Ax,&Ay,&Ex,&Ey,&Bx,&By);
        if(Ax==Dx && Dx==Ex && Ex==Bx)
            printf("LINE\n");
        else if(Ax==Dx && Ex==Bx)
            printf("NONE\n");
        else if(Ax==Dx && Ex!=Bx)
        {
            Px=Ax;
            m2=(Ey-By)/(Ex-Bx);
            c2=By-m2*Bx;
            Py=m2*Px+c2;
            printf("POINT %.2lf %.2lf\n",Px,Py);
        }
        else if(Ex==Bx && Ax!=Dx)
        {
            Px=Ex;
            m1=(Dy-Ay)/(Dx-Ax);
            c1=Ay-m1*Ax;
            Py=m1*Px+c1;
            printf("POINT %.2lf %.2lf\n",Px,Py);
        }
        else
        {
            m1=(Dy-Ay)/(Dx-Ax);
            m2=(Ey-By)/(Ex-Bx);
            c2=By-m2*Bx;
            c1=Ay-m1*Ax;
            Px=(c2-c1)/(m1-m2);


            Py=m1*Px+c1;

            if(m1==m2 && (c1!=c2))printf("NONE\n");
            else if(m1==m2 && (c1==c2))printf("LINE\n");
            else
                printf("POINT %.2lf %.2lf\n",Px,Py);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}

