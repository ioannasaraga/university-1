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
    for(j=3;j*j<=n;j+=2){
       if(!(n%j)){
         return 0;
       }
    }
    return 1;
}
 long long  mirror(unsigned long long n){
    unsigned long long k,c=0;
    unsigned long long _n=0;
    unsigned long long p=10;
   
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
    unsigned long long low=atoll(argv[1]);
    unsigned long long high=atoll(argv[2]);
    
   if(low>high || low<MIN || high>MAX){
         return 1;
  }

 
 int sqlow=ceil(sqrt(low));
 unsigned long long i;
 unsigned long long sum=0;
  for(i=sqlow;i*i<=high;i++){
    unsigned long long j=i*i;
    unsigned long long _j=mirror(j);
    int _square=ceil(sqrt(_j));
    if(j!=_j && prime(i) && sqrt(_j)==_square && prime(_square)){
  
           sum = sum + j;
        
    }

      
 }
 printf("%lld\n",sum);
 return 0;

} 
