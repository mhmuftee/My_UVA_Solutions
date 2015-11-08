#include<stdio.h>

int main() {
    long int N[50003],Q[25003],Nn[50003];

    long int i,j,k,n,a,m,key,low,high,mid,found;
    for(i=0; i<=50002; i++)N[i]=0;
    for(j=0; j<=25002; j++)Q[j]=0;
    scanf("%ld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%ld",&Nn[i]);
        if(Nn[i]==Nn[i-1])Nn[i-1]=0;
    }

    k=1;
    for(i=1; i<=n; i++)
        if(Nn[i]!=0) {
            N[k]=Nn[i];
            k++;
        }

    scanf("%ld",&m);
    for(j=1; j<=m; j++)
    {   scanf("%ld",&key);

        low=0;
        high=k;
        found=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(key<N[mid])

            {   if(N[mid-1]==0) {
                    printf("X %ld\n",N[mid]);
                    break;
                }

                if(key>N[mid-1]) {
                    printf("%ld %ld\n",N[mid-1],N[mid]);
                    break;
                }

                high=mid-1;
            }
            else
            {
                if(key>N[mid])

                {   if(N[mid+1]==0) {
                        printf("%ld X\n",N[mid]);
                        break;
                    }

                    if(key<N[mid+1]) {
                        printf("%ld %ld\n",N[mid],N[mid+1]);
                        break;
                    }

                    low=mid+1;
                }
                else
                {

                    if(key==N[mid])

                    {   if(N[mid-1]==0 && N[mid+1]==0) {
                            printf("X X\n");
                            break;
                        }
                        if(N[mid-1]==0) {
                            printf("X %ld\n",N[mid+1]);
                            break;
                        }
                        if(N[mid+1]==0) {
                            printf("%ld X\n",N[mid-1]);
                            break;
                        }
                        else
                            printf("%ld %ld\n",N[mid-1],N[mid+1]);
                        found=1;
                        break;
                    }
                }
            }
        }

    }
    return 0;
}
