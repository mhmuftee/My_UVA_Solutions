#include<stdio.h>
#include<string.h>
char a[122];

int main()
{
    int i,n,palin,sm,count=0;
    char s[122];
    for(i=48; i<=90; i++)
        a[i]=' ';

    a[49]='1';
    a[50]='S';
    a[51]='E';
    a[53]='Z';
    a[56]='8';
    a[65]='A';
    a[69]='3';
    a[72]='H';
    a[73]='I';
    a[74]='L';
    a[76]='J';
    a[77]='M';
    a[79]='O';
    a[83]='2';
    a[84]='T';
    a[85]='U';
    a[86]='V';
    a[87]='W';
    a[89]='Y';
    a[90]='5';

    while(gets(s))
    {
        palin=0;
        sm=0;

        n=strlen(s);
        if(n%2==0)
        {
            for(i=0; i<n/2; i++)
                if(s[i]==s[n-1-i])
                    palin++;
            if(palin==n/2)
            {
                for(i=0; i<n/2; i++)
                    if(a[s[i]]==s[n-1-i])
                        sm++;
                if(sm==n/2)
                    printf("%s -- is a mirrored palindrome.\n",s);
                else
                    printf("%s -- is a regular palindrome.\n",s);
            }

            else
            {
                if(n%2==0)
                {
                    for(i=0; i<n/2; i++)
                        if(a[s[i]]==s[n-1-i])
                            sm++;
                    if(sm==n/2)printf("%s -- is a mirrored string.\n",s);
                    else
                        printf("%s -- is not a palindrome.\n",s);
                }
                else
                {
                    for(i=0; i<=n/2; i++)
                        if(a[s[i]]==s[n-1-i])
                            sm++;
                    if(sm==n/2+1)printf("%s -- is a mirrored string.\n",s);
                    else
                        printf("%s -- is not a palindrome.\n",s);
                }
            }
        }
        else
        {
            for(i=0; i<=n/2; i++)
                if(s[i]==s[n-1-i])
                    palin++;
            if(palin==n/2+1)
            {
                for(i=0; i<=n/2; i++)
                    if(a[s[i]]==s[n-1-i])
                        sm++;
                if(sm==n/2+1)
                    printf("%s -- is a mirrored palindrome.\n",s);
                else
                    printf("%s -- is a regular palindrome.\n",s);
            }

            else
            {
                if(n%2==0)
                {
                    for(i=0; i<n/2; i++)
                        if(a[s[i]]==s[n-1-i])
                            sm++;
                    if(sm==n/2)printf("%s -- is a mirrored string.\n",s);
                    else
                        printf("%s -- is not a palindrome.\n",s);
                }
                else
                {
                    for(i=0; i<=n/2; i++)
                        if(a[s[i]]==s[n-1-i])
                            sm++;
                    if(sm==n/2+1)printf("%s -- is a mirrored string.\n",s);
                    else
                        printf("%s -- is not a palindrome.\n",s);
                }

            }
        }
        printf("\n");
    }

    return 0;
}
