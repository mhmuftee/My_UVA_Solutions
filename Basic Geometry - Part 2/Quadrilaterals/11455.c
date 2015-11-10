#include<stdio.h>
int main() {
    long long int i,j,k,n,m,t,a[4];
    scanf("%llu",&n);
    for(m=0; m<n; m++)
    {
        for(j=0; j<4; j++)
            scanf("%llu",&a[j]);
        k=0;

        for(i=0; i<3; i++)
            for(j=i+1; j<4; j++)
                if(a[j]>a[i])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }


        t=a[0];

        if(a[0]==a[1]&& a[1]==a[2] && a[3]==a[2])printf("square\n");
        else if(a[0]==a[1]&& a[2]==a[3]  &&a[0]!=a[3])printf("rectangle\n");
        else if(a[1]+a[2]+a[3]>a[0])printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
