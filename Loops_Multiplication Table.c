#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;++i){
        int mul=n*i;
        printf("%d x %d = %d\n",n , i, mul);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
