#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int a[10005];
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        char ch;
        scanf(":",&ch);

        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        bool fals=0;

        for(int i=0; i<n-2; i++)
            for(int j=i+1,k=j+1; j<n-1; k++,j++)

                if((a[i]-a[j]) == (a[j]-a[k]))
                {
                    fals=1;
                }

        if(fals)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}
