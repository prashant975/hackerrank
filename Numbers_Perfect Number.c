#include <stdio.h>

int main() {
    unsigned n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n;++i){
        if(n%i==0){
            sum=sum+i;
        }
        
    }
    if(sum==n){
        printf("YES");
    }
    else{
        printf("NO");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
