#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  
int main(int argc, char**argv){
    if(argc !=8){
        return 1;
    }
     double a_0=strtod(argv[1], NULL);
     double a_1=strtod(argv[2], NULL);
     double a_2=strtod(argv[3], NULL);
     double a_3=strtod(argv[4], NULL);
     double a_4=strtod(argv[5], NULL);
     double a_5=strtod(argv[6], NULL);
     double x_0=strtod(argv[7], NULL);
     
   
    double x_1=x_0;
    int i;
    double f,f_,y;
    for(i=0;i<1000;i++){
        
         y=x_1;
         f=a_0+a_1*x_1+a_2*pow(x_1,2)+a_3*pow(x_1,3)+a_4*pow(x_1,4)+a_5*pow(x_1,5);
         f_=a_1+(2*a_2*x_1)+(3*a_3*pow(x_1,2))+(4*a_4*pow(x_1,3))+(5*a_5*pow(x_1,4));

        if(isnan(f_)){
            printf("nan\n");
            break;
        }

         x_1=x_1-(f/f_); 
         
     

       if(fabs(x_1-y)<pow(10,-6)){
            printf("%.2f\n",x_1);
            break;
        } 

    }

    if(i==1000){
        printf("incomplete\n");
        return 0;
    }
    
}


    




    
    
    
