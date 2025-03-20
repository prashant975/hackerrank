#include <stdio.h>

int main() {
   int n;
    scanf("%d",&n);
    int al=1;
     
    for(int i=n; i>0;--i){
   
        if(n%i==0){
            if(al){
                printf("%d",i);
                al=0;
            }
            else if(al==0&&i>1){
                printf(" ");
                al=1;
                
            }
            
        }
    
        
    }
        printf(".");
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
