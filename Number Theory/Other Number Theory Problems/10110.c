#include<stdio.h>
#include<math.h>

int main()
{
    long int a,b;
    while(scanf("%lu",&a)!=EOF)
    {
        b=sqrt(a);
        if(a==b)
            break;
        if(b*b==a)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
