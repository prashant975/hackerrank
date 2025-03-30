#include <stdio.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int arr[], int n, int k) {
  // Write your code here
    
    
    
    int unique[n];
    int unique_count=0;
    
    for(int i=0;i<n;i++){
        int isDuplicate=0;
        for(int j=0;j<unique_count;++j){
        if(unique[j]==arr[i]){
            isDuplicate=1;
            break;
        }
    }
        if(!isDuplicate){
            unique[unique_count++]=arr[i];
            
        }
    }
  
    int index;
    int min;

    for(int j=1;j<=k;j++){
        min =2147483647;
        for(int i=0;i<unique_count;++i){
            
       if(unique[i]<min){
           min=unique[i];
           index=i;
        }
       }
        unique[index]=2147483647;
    }
    
    
    return min;
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}
