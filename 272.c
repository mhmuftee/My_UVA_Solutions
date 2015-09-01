#include<stdio.h>
int main()
{
    char ch;
    long int i;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='"')
        {
            i++;
            if(i%2==0)
                printf("''");
            else
                printf("``");
        }
        else
            printf("%c",ch);
    }
    return 0;
}
