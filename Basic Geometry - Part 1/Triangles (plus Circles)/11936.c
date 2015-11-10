#include<stdio.h>
int main() {
    int i,j,k,n,a[4],t;
    scanf("%d",&n);
    for(k=0; k<n; k++)
    {
        scanf("%d %d %d",&a[1],&a[2],&a[3]);
        for(i=1; i<3; i++)
            for(j=i+1; j<=3; j++)
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }

        if(a[1]+a[2]>a[3])printf("OK\n");
        else printf("Wrong!!\n");
    }
    return 0;
}
