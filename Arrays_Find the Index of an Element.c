#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    
    
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
        
    }
   int target;
    scanf("%d",&target);
    int i=0;
        for(i=0;i<n;++i){
        if(a[i]==target){
            break;
        }
    }
    if(i<n){
        printf("%d",i);
    }
    else{
        printf("-1");
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
