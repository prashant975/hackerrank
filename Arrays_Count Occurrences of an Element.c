#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
        
    }
    int  target;
    int count=0;
    scanf("%d",&target);
    
    for(int i=0;i<n;++i){
        if(a[i]==target){
            count++;
        }
       
    }
    printf("%d",count);
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
