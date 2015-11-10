#include<stdio.h>
int main()
{
    long int i,j,t,a[3],x,y,z,n;
    int k,c;
    scanf("%d",&c);
    for(k=1; k<=c; k++)
    {
        for(i=0; i<3; i++)
            scanf("%lu",&a[i]);
        for(i=0; i<2; i++)
            for(j=i+1; j<3; j++)
                if(a[j]<a[i])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
        x=a[0];
        y=a[1];
        z=a[2];
        n=x+y;
        if(n<=z)
            printf("Case %d: Invalid\n",k);
        else
        {
            if((x==y)&&(y==z)&&(x==z))
                printf("Case %d: Equilateral\n",k);
            else
            {
                if((x==y)||(y==z))
                    printf("Case %d: Isosceles\n",k);
                if((x!=y)&&(y!=z))
                    printf("Case %d: Scalene\n",k);
            }
        }
    }
    return 0;
}
