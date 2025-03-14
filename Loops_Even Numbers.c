#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;++i){
        if(i>0&&i%2==0){
            printf("%d ",i);
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
