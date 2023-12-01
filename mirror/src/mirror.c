#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX pow(10,15)
#define MIN 1

 unsigned long long  prime(unsigned long long n){
    unsigned long long j;
    if(n==2) 
      return 1;
    if(!(n%2)){
        return 0;
    }
    for(j=3;j<=n/2;j+=2){
       if(!(n%j)){
         return 0;
       }
    }
    return 1;
}
 unsigned long long mirror(unsigned long long n){
    int k,c=0;
    unsigned long long _n=0;
    int p=10;
    while(n%p!=n){
        p=p*10;
    }
    for(k=10;k<=p;k=k*10){
    c=n%10;
    _n=(_n*10)+c;
    n=n/10;
    }
    return _n;
}


int main(int argc, char**argv){
    if(argc !=3){
       return 1;
    }
    unsigned long long low=atoi(argv[1]);
    unsigned long long high=atoi(argv[2]);
    
   if(low>high || low<MIN || high>MAX){
         return 1;
  }

 
 int sqlow=ceil(sqrt(low));
 int i;
 unsigned long long sum=0,j=0,_j=0;
  for(i=sqlow;i<=floor(sqrt(high));i++){
    j=i*i;
    _j=mirror(j);
    int _square=ceil(sqrt(_j));
    if(j!=_j && prime(i) && sqrt(_j)==_square && prime(_square)){
           sum = sum + j;
        
    }

      
 }
 printf("%lld\n",sum);

}
