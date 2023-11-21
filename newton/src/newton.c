#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  
int main(int argc, char**argv){
    if(argc !=8){
        printf("incomplete\ncheck input\n");
        return 1;
    }
     double a_0=atoi(argv[1]);
     double a_1=atoi(argv[2]);
     double a_2=atoi(argv[3]);
     double a_3=atoi(argv[4]);
     double a_4=atoi(argv[5]);
     double a_5=atoi(argv[6]);
     double x_0=atoi(argv[7]);
     
   
   
    double x_1=x_0;
    int i;
    double f,f_,f1,y;
    for(i=0;i<1000;i++){
           if(i==1000){
            printf("incomplete\n");
            break;
        }
         y=x_1;
         f=a_0+a_1*x_1+a_2*pow(x_1,2)+a_3*pow(x_1,3)+a_4*pow(x_1,4)+a_5*pow(x_1,5);
         f_=a_1+(2*a_2*x_1)+(3*a_3*pow(x_1,2))+(4*a_4*pow(x_1,3))+(5*a_5*pow(x_1,4));

          if(f_==0.0){
            printf("nan\n");
            break;
        }

         x_1=x_1-(f/f_); 
         f1=a_0+a_1*x_1+a_2*pow(x_1,2)+a_3*pow(x_1,3)+a_4*pow(x_1,4)+a_5*pow(x_1,5);
        
    
    
       if(fabs(f1)<=0.009){
           printf("%2.2f\n",x_1);
           break ;
        }

       if(fabs(x_1-y)<pow(10,-6)){
             printf("%2.2f\n",x_1);
             break;
        } 

    }
          if(i==1000){
            printf("incomplete\n");
            return 0;
        }
    
}
