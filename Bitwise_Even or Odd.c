#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x=n&1;
    if(x==0){
        printf("Even");
    }
    else{
        printf("Odd");
        
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
