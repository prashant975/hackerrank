#include <stdio.h>

int main() {
    int n;
    scanf("%d ",&n);
    int x=(n*2)-1;
    for(int i=1; i<=n;++i){
        
        printf("%d",x);
        
        x=x-2;
        if(i!=n){
           printf(" "); 
        }
        else{
            printf(".");
        }
        
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
