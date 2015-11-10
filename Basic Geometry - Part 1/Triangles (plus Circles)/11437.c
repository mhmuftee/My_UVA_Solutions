#include<stdio.h>
#include<math.h>
int main() {
    double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Ex,Ey,Fx,Fy,Px,Py,Qx,Qy,Rx,Ry,m1,m2,c1,c2,PQ,QR,RP,a,b,c,s,A;
    int i,n;

    scanf("%d",&n);
    for(i=0; i<n; i++) {
        scanf("%lf %lf %lf %lf %lf %lf",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
        Dx=(Cx+2*Bx)/3;
        Dy=(Cy+2*By)/3;
        Ex=(Ax+2*Cx)/3;
        Ey=(Ay+2*Cy)/3;
        Fx=(Bx+2*Ax)/3;
        Fy=(By+2*Ay)/3;

        m1=(Dy-Ay)/(Dx-Ax);
        m2=(Ey-By)/(Ex-Bx);
        c1=Ay-m1*Ax;
        c2=By-m2*Bx;
        Px=(c2-c1)/(m1-m2);
        Py=m1*Px+c1;




        m1=(Fy-Cy)/(Fx-Cx);
        m2=(Ey-By)/(Ex-Bx);
        c1=Cy-m1*Cx;
        c2=By-m2*Bx;
        Qx=(c2-c1)/(m1-m2);
        Qy=m1*Qx+c1;



        m1=(Dy-Ay)/(Dx-Ax);
        m2=(Fy-Cy)/(Fx-Cx);
        c1=Ay-m1*Ax;
        c2=Cy-m2*Cx;
        Rx=(c2-c1)/(m1-m2);
        Ry=m1*Rx+c1;

        PQ=(Px-Qx)*(Px-Qx)+(Py-Qy)*(Py-Qy);
        a=sqrt(PQ);

        QR=(Qx-Rx)*(Qx-Rx)+(Qy-Ry)*(Qy-Ry);
        b=sqrt(QR);

        RP=(Rx-Px)*(Rx-Px)+(Ry-Py)*(Ry-Py);
        c=sqrt(RP);

        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.0lf\n",A);
    }
    return 0;
}
