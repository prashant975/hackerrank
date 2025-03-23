#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    // Your code here
        int a[n];
    int k =1;
    
    
    int i=0;
    for ( i = 0; i < n; ++i) {
        if(i-k<0){
        a[i-k+n]=arr[i];
        }
    else{
        a[i-k]=arr[i];
    }
    }
    for(int i=0;i<n;++i){
        
      arr[i]=a[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
