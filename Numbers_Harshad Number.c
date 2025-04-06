#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int n_o=n;
     
    int sum=0;
    int d;
    while(n>0){
      d= n%10;
        sum+=d;
        n=n/10;
    }
    
    if(n_o%sum==0){
        
    printf("%d is a harshad number",n_o);
    }
    else{
        printf("%d is not a harshad number",n_o);
    }

    

    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
