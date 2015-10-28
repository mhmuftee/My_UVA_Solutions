#include<stdio.h>
#include<math.h>
int main() {
    int x1,x2,y1,y2,a,b;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4) {
        if(x1==0 && y1==0 && x2==0 && y2==0)
            break;
        a=abs(x1-x2);
        b=abs(y1-y2);
        if(a==0 && b==0)printf("0\n");
        else if(a==b)printf("1\n");
        else if(a==0 || b==0)printf("1\n");
        else
            printf("2\n");
    }

    return 0;
}
