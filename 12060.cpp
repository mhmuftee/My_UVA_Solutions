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

 // freopen("in.txt","r",stdin);  
  //freopen("out.txt","w",stdout);

  int I = 1;  

  while(scanf("%d",&kase)==1 && kase){

    minus = 0;
    double avg = 0;    

    for(int I=1 ; I<=kase; I++){
      scanf("%d",&number);
      avg+=number;
    }

    avg/=kase;

    printf("%.18lf\n",avg);

   if(avg<0) {avg*=-1;minus = 1;}

    double continued = avg;

    long a = (long)avg, b = 0, c = 0;


    avg-=a;

    printf("%lf\n",1/avg);

    b+=avg*1000000;

    long Gcd = 0;

    if(b){
      c +=1000000;
      Gcd=gcd(b,c);
      b/=Gcd;
      c/=Gcd;
    }
    printf("%ld %ld %ld\n",b,c,Gcd);

    if(Gcd==1){
      continued = avg*10-avg;

      long d = (long)continued;
       
      //printf("%ld\n",d);      
      
      long g = gcd(d,9);
      b=d/g;
      c=9/g;
    }

    //printf("gcd=%ld\n",gcd(b,c));

    //printf("%ld %ld %ld Gcd = %ld\n",a,b,c,Gcd);


    printf("Case %d:\n",I);

    if(b){

      char check[50];

      sprintf(check,"%ld",c);

      int numberOf_ = strlen(check);
      int len = 0;
      if(a){
      sprintf(check,"%ld",a);
      len += strlen(check);
      }
      len+=numberOf_;

      //printf("%d\n",len);

    if(minus){
      
      len+=2;
    }    
    
      std::cout.width(len); std::cout << std::right << b << '\n';
      if(minus)printf("- ");
      if(a)printf("%ld",a);
      for(int i=0;i<numberOf_;i++) printf("-");
      printf("\n");
      std::cout.width(len); std::cout << std::right << c << '\n';      
 
   
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
