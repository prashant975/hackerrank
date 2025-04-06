#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int target_sum;
    scanf("%d",&target_sum);
    
    int index1 =-1;
    int index2 =-1;
    int diff=1000000;
   
    
     for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            int sum=a[i]+a[j];
            int current_diff=abs(target_sum-sum);
            if(current_diff<diff){
                diff=current_diff;
                   index1=i;
                   index2=j;
            
            }
    }
    }
    printf("%d %d",a[index1],a[index2]);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
