#include<stdio.h>

int main()
{
    long a,b,kas;
    scanf("%ld",&kas);
    while(kas--)
    {
        scanf("%ld %ld",&a,&b);
        if(a==b)
        printf("=\n");
        else
        if(a<b)
        printf("<\n");
        else
        printf(">\n");
    }
    return 0;
}
