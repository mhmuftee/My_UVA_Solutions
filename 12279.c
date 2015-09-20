#include<stdio.h>

int main(){

    long int a[1005];

    long int i,n,j,count1,count2,count3;
j=1;
while(scanf("%ld",&n)==1 && n)
{   count2=0;count1=0;
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);

    for(i=0;i<n;i++)
    {
        if(!(a[i]))
        count2++;
        else
        if(a[i]>0 && a[i]<100)
        count1++;

        count3=count1-count2;


    }

    printf("Case %ld: %ld\n",j,count3);
j++;
}
    return 0;}
