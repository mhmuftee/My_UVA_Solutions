#include<stdio.h>
#include<string.h>
int main(){
    int i,n,c;
    char s[1000];
    scanf("%d",&c);
    for(i=0;i<c;i++)
{
    scanf("%s",s);

    n=strlen(s);

    if((strcmp(s,"1")==0)|| (strcmp(s,"4")==0)||(strcmp(s,"78")==0))
    printf("+\n");
    else
    if(s[n-1]=='5' && s[n-2]=='3')
    printf("-\n");
    else
     if(s[n-1]=='4' && s[0]=='9')
    printf("*\n");
    else
     if(s[0]=='1' && s[1]=='9' && s[2]=='0')
    printf("?\n");

}
    return 0;}
