#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=100;++i){
        if(i%3==0&&i%5==0)
            printf("%d\n",i);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
