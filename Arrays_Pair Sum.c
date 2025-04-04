#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int target_sum;
    scanf("%d",&target_sum);
    int i=0;
     for(i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            int sum=a[i]+a[j];
            if(sum==target_sum){
            printf("%d %d",a[i],a[j]);
                return 0;
            }
        
    }
    }
    if(i==n){
        printf("-1");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
