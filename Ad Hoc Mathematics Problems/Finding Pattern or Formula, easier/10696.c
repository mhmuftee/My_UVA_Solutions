#include<stdio.h>
int main()
{
    int i;
    while (scanf("%d",&i))
    {
        if (i==0)
            break;
        else if (i<=100)
            printf("f91(%d) = 91\n",i);
        else
            printf("f91(%d) = %d\n",i,(i-10));
    }
    return 0;
}
