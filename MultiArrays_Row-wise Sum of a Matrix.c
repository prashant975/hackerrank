#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d", &n,&m);
        
    int size=100;
    int matrix[size][size];
    
    for(int i=0;i<n; i++) {
        for (int j=0;j<m;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        int sum= 0;
        for(int j=0;j<m;j++) {
            sum =sum+matrix[i][j];
        }
        printf("%d ",sum);
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
