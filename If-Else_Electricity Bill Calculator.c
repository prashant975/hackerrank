#include <stdio.h>

int main() {
    float n;
    scanf("%f",&n);
    if(n>=0&&n<=100)
    {  double bill=n*5;  
        bill=bill-(bill*0.1);
        printf("The electricity bill is: %.2f.",bill);
     }
    else if(n>100&&n<=300)
        {
        double bill=(n-100)*7+500;
          if(bill<=1200)
          {
           double disbill=bill-(bill*0.1);
            printf("The electricity bill is: %.2f.",disbill);
              }
        else{
            printf("The electricity bill is: %.2f.",bill);
        }
     }
     else if(n>300)
        {
        double bill=(n-300)*10+1400+500;
        printf("The electricity bill is: %.2f.",bill);
     }
    else if(n<0){
        printf("Invalid Input!");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
