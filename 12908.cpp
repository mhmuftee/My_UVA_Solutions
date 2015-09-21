#include<cstdio>
#include<algorithm>
#include<iostream>
#define MAX 100000000
using namespace std;

unsigned long long int stored_summation[MAX+10];

int main(){

  stored_summation[1] = 1; 

  unsigned long long int input_number, summation = 0;

  for(unsigned long long int number = 2; number<=MAX; number++)
    stored_summation[number] = number + stored_summation[number-1];

  while(scanf("%llu",&input_number)==1 && input_number){

    unsigned long long int search_index = upper_bound(stored_summation,stored_summation+MAX,input_number)-stored_summation;
    
    printf("%llu %llu\n",stored_summation[search_index]-input_number,search_index);    

  }

  return 0;
}
