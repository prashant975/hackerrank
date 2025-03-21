#include <stdio.h>

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    // Your implementation here
         int a[n];
    k=k%n;
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
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
