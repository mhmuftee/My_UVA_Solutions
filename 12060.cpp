#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

long gcd(long a,long b){
  if(b==0)return a;
  else return gcd(b,a%b);

}



int main(){

  int kase,number;
  bool minus;

  int I = 1;  

  while(scanf("%d",&kase)==1 && kase){

    minus = 0;
    double avg = 0;    

    for(int I=1 ; I<=kase; I++){
      scanf("%d",&number);
      avg+=number;
    }

    avg/=kase;

   if(avg<0) {avg*=-1;minus = 1;}

    double continued = avg;

    long a = (long)avg, b = 0, c = 0;

    avg-=a;

    b+=avg*1000000;

    long Gcd = 0;

    if(b){
      c +=1000000;
      Gcd=gcd(b,c);
      b/=Gcd;
      c/=Gcd;
    }

    if(Gcd==1){
      continued = avg*10-avg;

      long d = (long)continued;
       
      printf("%ld\n",d);      
      
      long g = gcd(d,9);
      b=d/g;
      c=9/g;
    }

    //printf("gcd=%ld\n",gcd(b,c));

    //printf("%ld %ld %ld Gcd = %ld\n",a,b,c,Gcd);


    printf("Case %d:\n",I);

    if(b){
      if(minus)
        printf("%3ld\n",b);
      else 
        printf("%2ld\n",b);

    if(minus)
      printf("-");
        
        
    printf("%ld-\n",a);

    if(minus)
      printf("%3ld\n",c);
    else 
      printf("%2ld\n",c);
   
    }
    else {
    if(minus)
     printf("- %ld\n",a);
    else 
      printf("%ld\n",a);
    }
    I++;

  }

  return 0;
}
