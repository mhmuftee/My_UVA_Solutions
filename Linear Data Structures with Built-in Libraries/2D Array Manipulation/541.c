#include<stdio.h>

int main(void)
{

    int a[100][100],srow[100],scolum[100],sr,sc,k,l,i,j,n,count,s;

    while(scanf("%d",&n)==1 && n)
    {
        s=0;
        sr=0;
        sc=0;
        k=0;
        l=0;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);

        for(i=0; i<n; i++)
        {
            s=0;
            for(j=0; j<n; j++)
            {
                s+=a[i][j];
                srow[i]=s;
            }
        }


        for(j=0; j<n; j++)
        {
            s=0;
            for(i=0; i<n; i++)
            {
                s+=a[i][j];
                scolum[j]=s;
            }
        }

        for(i=0; i<n; i++)
        {
            srow[i]=srow[i]%2;
            scolum[i]=scolum[i]%2;

        }


        for(i=0; i<n; i++)
        {
            sr=sr+srow[i];
            if(sr==1 && srow[i])k=i;
        }

        for(i=0; i<n; i++)
        {
            sc+=scolum[i];
            if(sc==1 && scolum[i])l=i;
        }

        if((!sr) && (!sc))
            printf("OK\n");
        else if(sr==1 && sc==1)
            printf("Change bit (%d,%d)\n",k+1,l+1);
        else
            printf("Corrupt\n");

    }

    return 0;
}
