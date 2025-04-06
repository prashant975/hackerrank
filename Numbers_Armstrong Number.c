#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int original_n=n; 
    int digit=0;
    
    while(n>0){
        n=n/10;
        digit++;
    }

    n=original_n;

    int sum=0;
    int d;
    while(n>0){
        d=n % 10; 
        sum=sum+pow(d, digit); 
        n=n/10; 
    }
 if(sum==original_n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
