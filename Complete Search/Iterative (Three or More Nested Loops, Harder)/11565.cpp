#include<cstdio>
using namespace std;

int main()
{

    int A,B,C,cas;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d %d %d",&A,&B,&C);
        int found=0;
        for(int i=-100; i<100 && !found; i++)
            for(int j=-100; j<100 && !found; j++)
                for(int k=-100; k<100 && !found; k++)
                {
                    if(i!=j && j!=k && k!=i)
                        if(i+j+k==A && i*j*k==B && i*i+j*j+k*k==C)
                        {
                            printf("%d %d %d\n",i,j,k);
                            found=1;
                            break;
                        }
                }
        if(!found) printf("No solution.\n");
    }
    return 0;
}
