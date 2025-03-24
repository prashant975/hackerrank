#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    // Complete the function logic here
    int max=arr[0];
    int second_largest=-1000000001;
    
    for(int i=0;i<=n-1;++i){
        if(arr[i]>max){
            second_largest=max;
            max=arr[i];
        }
        else if(arr[i]>second_largest&&arr[i]!=max){
            second_largest=arr[i];
        }
        
        
    }
    if(second_largest==-1000000001){
        return -1;
    }
    else{
        return second_largest;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
