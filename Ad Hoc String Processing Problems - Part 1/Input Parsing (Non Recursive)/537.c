#include<stdio.h>
#include<stdlib.h>
#include<string.h>
double converter(char a[100],char s) {
    int n;
    double d=0;
    d=atof(a);
    if(s=='m') {
        d=d/1000;
    }
    else if(s=='k') {
        d=d*1000;
    }
    else if(s=='M') {
        d=d*1000000;
    }
    return d;
}

int main() {
    int i,j,l,ck=0,n,cu=0,cp=0,kase;
    int mega=0,mili=0,kilo=0,dot=0,dot1=0,volt1=0,volt2=0,volt=0;
    char c[600],U[122],P[122],I[122],Uu=0,Pp=0,Ii=0;
    double rv,rp,ri;
    scanf("%d\n",&kase);
    for(l=0; l<kase; l++) {
        ck=0;
        cu=0;
        cp=0;
        for(i=0; i<122; i++) {
            U[i]=0;
            P[i]=0;
            I[i]=0;
        }
        Uu=0;
        Pp=0;
        Ii=0;
        rv=0;
        rp=0;
        ri=0;
        gets(c);
        n=strlen(c);
        for(i=0; i<n; i++)
            if(c[i]=='=')
            {
                if(c[i-1]=='U') {
                    cu=0;
                    Uu=1;
                    for(j=i+1; j<=n; j++) {
                        if(c[j]!='V') {
                            U[cu]=c[j];
                            cu++;
                        }
                        if(c[j]=='V')break;
                    }
                }

                if(c[i-1]=='P') {
                    cp=0;
                    Pp=1;
                    for(j=i+1; j<=n; j++) {
                        if(c[j]!='W') {
                            P[cp]=c[j];
                            cp++;
                        }
                        if(c[j]=='W')break;
                    }
                }

                if(c[i-1]=='I') {
                    ck=0;
                    Ii=1;
                    for(j=i+1; j<=n; j++) {
                        if(c[j]!='A') {
                            I[ck]=c[j];
                            ck++;
                        }
                        if(c[j]=='A')break;
                    }
                }
            }
        if(Uu==1) {
            rv=converter(U,U[cu-1]);
        }
        if(Ii==1) {
            ri=converter(I,I[ck-1]);
        }
        if(Pp==1) {
            rp=converter(P,P[cp-1]);
        }
        if(Uu==0 && Pp==1 && Ii==1) {
            rv=rp/ri;
            printf("Problem #%d\nU=%.2lfV\n\n",l+1,rv);
        }

        if(Pp==0 && Uu==1 && Ii==1) {
            rp=rv*ri;
            if(rp==-0.00)rp=0;
            printf("Problem #%d\nP=%.2lfW\n\n",l+1,rp);
        }

        if(Ii==0 && Pp==1 && Uu==1) {
            ri=rp/rv;
            printf("Problem #%d\nI=%.2lfA\n\n",l+1,ri);
        }
    }
    return 0;
}

