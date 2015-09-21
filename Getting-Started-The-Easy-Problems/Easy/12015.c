#include<stdio.h>
struct google {char url[100];int a;};
typedef struct google gl;
int main(){
    gl g[10];
    int i,j,n,max=0;;
    scanf("%d",&n);
    for(j=0;j<n;j++)

    {
        max=0;
           for(i=0;i<10;i++)
        {scanf("%s%d",g[i].url,&g[i].a);
        if(g[i].a>=max)max=g[i].a;}
        printf("Case #%d:\n",j+1);
        for(i=0;i<10;i++)

    if(g[i].a==max)
    printf("%s\n",g[i].url);
    }


    return 0;}
