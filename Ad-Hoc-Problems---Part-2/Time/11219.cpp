#include<cstdio>
using namespace std;

int main()
{
    int kase;
    int current_date,current_month,current_year,birth_date,birth_month,birth_year;

    scanf("%d",&kase);

    for(int I=1; I<=kase; I++)
    {
        scanf("%d/%d/%d",&current_date,&current_month,&current_year);
        scanf("%d/%d/%d",&birth_date,&birth_month,&birth_year);

        printf("Case #%d: ",I);
        int year = current_year-birth_year;
        bool invalid = 0;

        if(current_year<=birth_year && current_month<=birth_month && current_date<birth_date)
            invalid = 1;

        if(year>=0 && !invalid)
        {
                if ( birth_month==current_month)
                {
                    if(birth_date>current_date)
                    year--;
                }
                else
                if(birth_month>current_month)
                    year--;
        }

        if(year<0) invalid=1;

        if(invalid)
            printf("Invalid birth date\n");
        else
        if(year>130)
            printf("Check birth date\n");
        else if(!invalid)
            printf("%d\n",year);

    }

    return 0;
}
