#include<stdio.h>
#include<string.h>

int main(){
    char a[15];
    int i=1,len;

    while(scanf("%s",a)==1)
    {
        if(!strcmp(a,"#"))
        break;
        else
        if(!strcmp(a,"HELLO"))
        printf("Case %d: ENGLISH\n",i);
        else
        if(!strcmp(a,"HOLA"))
        printf("Case %d: SPANISH\n",i);
        else
        if(!strcmp(a,"HALLO"))
        printf("Case %d: GERMAN\n",i);
        else
        if(!strcmp(a,"BONJOUR"))
        printf("Case %d: FRENCH\n",i);
        else
        if(!strcmp(a,"CIAO"))
        printf("Case %d: ITALIAN\n",i);
        else
        if(!strcmp(a,"ZDRAVSTVUJTE"))
        printf("Case %d: RUSSIAN\n",i);
        else
        printf("Case %d: UNKNOWN\n",i);
        i++;
    }
    return 0;}
