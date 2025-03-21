#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>0){
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    
    }
    int i=0;
    for( i=0;i<n-1;++i){
        if(a[i]>a[i+1]){
            break;
        }
        
    }
    if(i<n-1){
        
    printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
