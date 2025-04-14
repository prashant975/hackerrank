#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int N=n*2-1;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            int min=i;
            if(j<min){
                min=j;
            }
             if(N-1-i<min){
                min=N-i-1;
            }
            if(N-1-j<min){
                min=N-j-1;
            }
         printf("%d ",n-min);
    }
        printf("\n");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
