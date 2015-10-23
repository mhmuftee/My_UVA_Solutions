#include<stdio.h>

int main()
{
    char input[2005];
    long div,remainder;

    int cas,i;

    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%ld",&div);
        scanf("%s",input);

        remainder=0;
        for(i=0; input[i]!=0; i++)
        {
            remainder=remainder*10+(input[i]-'0');
            remainder%=div;
        }

        printf("%ld\n",remainder);
    }
    return 0;
}
