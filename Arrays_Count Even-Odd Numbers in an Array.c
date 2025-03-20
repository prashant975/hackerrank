#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
        
    }
    int  odd=0;
    int even=0;
    for(int i=0;i<n;++i){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("%d %d",even ,odd);
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
