#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int freq[2000001]={0};
    for (int i=0;i<n;i++){

            freq[a[i]+1000000]++;
    }
    for (int i=0;i<n;i++){
        if(freq[a[i]+1000000]>=2){
            printf("%d",a[i]);
            return 0;
        }
    }
    printf("No Repeating Element");
    return 0;
}
