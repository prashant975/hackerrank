#include <stdio.h>
#include <math.h>

int main() {
    int L, R;
    scanf("%d %d", &L, &R);
    
    int count = 0;
    int first_prime_found = 0;    
    for (int i = L; i <= R; i++) {
        
        if(i<=1)
        continue;
        
        
        int is_prime = 1;
        if (i==2) {
            is_prime = 1;
        } else if(i%2==0) {
            is_prime=0;
        } else {
            
            int limit=sqrt(i);
            for (int j=3;j<=limit;j+=2) {
                if(i%j==0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        
        
        if (is_prime) {
            if (first_prime_found) {
                printf(" ");
            }
            printf("%d", i);
            count++;
            first_prime_found = 1;
        }
    }
    
    if (count == 0) {
        printf("0\n");
    } else {
        printf("\n%d", count);
    }

    return 0;
}
