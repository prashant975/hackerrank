#include <stdio.h>

int main() {
    float income;
    scanf("%f",&income);
    float tax1=0;
     float tax2=(income-250000)*0.05;
    float tax3=(income-500000)*0.2 +12500;
    float tax4=(income-1000000)*0.3 +12500 +100000;
    
    
    if(income>=0&&income<=250000)
    {
        printf("%.2f",tax1);
    }
    if(income>250000&&income<=500000){
         printf("%.2f",tax2);
        
    }
    if(income>500000&&income<=1000000){
         printf("%.2f",tax3);
        
    }
         if(income>1000000){
         printf("%.2f",tax4);
        
    }
    if(income<0){
         printf("INVALID");
     }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
