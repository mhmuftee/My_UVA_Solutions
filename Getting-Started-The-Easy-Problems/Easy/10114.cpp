#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{

    int months, num_of_decpreciation;

    double down_payment,loan,depreciation[1000],car_value;

    while(scanf("%d %lf %lf %d",&months,&down_payment,&loan,&num_of_decpreciation)==4)
    {
        if(months<=0) break;

        int m; double n;

        memset(depreciation,0,sizeof(depreciation));

        for(int i=0;i<num_of_decpreciation;i++)
        {
            scanf("%d %lf",&m,&n);

            depreciation[m]=n;
        }


        for(int i=0;i<months;i++)
            if(depreciation[i]==0)
            depreciation[i]=depreciation[i-1];


            car_value=loan+down_payment;

            double pay=loan/(double)months;
            int i=0;

            for(i=0;i<months;i++)
            {


                car_value = car_value - car_value*depreciation[i];

                if(loan<car_value) break;

                loan = loan - pay;

            }

            if(i==1)
            printf("%d month\n",i);
            else
            printf("%d months\n",i);

    }

    return 0;
}
